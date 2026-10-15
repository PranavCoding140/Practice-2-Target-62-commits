//write a java program to add 2 arrays.
import java.util.Scanner;
public class AddArray{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=6,i;
int a[]= new int[n];
int b[]= new int[n];
System.out.print("Enter first array:");
for(i=0;i<n;i++){a[i]=sc.nextInt();}
System.out.print("Enter second array:");
for(i=0;i<n;i++){b[i]=sc.nextInt();}
int r[]= new int[n];
for(i=0;i<n;i++){r[i]=a[i]+b[i];}
System.out.print("The sum of arrays is:");
for(i=0;i<n;i++){
    System.out.print(r[i]+" ");
}
System.out.println();
}}
//1st error in setting i<=n instead typed i<n , hence ArrayOutOfBounds Exception
//2nd error in output, needed a for loop there as well to print all elements
