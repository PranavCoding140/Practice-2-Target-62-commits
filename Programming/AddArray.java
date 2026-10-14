//write a java program to add 2 arrays.
import java.util.Scanner;
public class AddArray{//error in passing array as a parameter.
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=6,i;
int a[]= new int[n];
int b[]= new int[n];
System.out.print("Enter first array:");
for(i=0;i<=n;i++){a[i]=sc.nextInt();}
System.out.print("Enter second array:");
for(i=0;i<=n;i++){b[i]=sc.nextInt();}
int r[]= new int[n];
System.out.print("The result of addition is:");
for(i=0;i<=n;i++){r[i]=a[i]+b[i];}
System.out.println(r[i]);//error in passing array as a parameter
}}//error
