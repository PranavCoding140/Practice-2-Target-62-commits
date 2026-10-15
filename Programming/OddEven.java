//Problem: Given an integer array of size N, write a Java program to separate and print all the even numbers first, followed by all the odd numbers.
//Input: [1, 2, 3, 4, 5, 6]
//Output: Even: 2, 4, 6 | Odd: 1, 3, 5
//Hint: Iterate through the array with a conditional check, or use two separate ArrayList structures (evenList and oddList).
import java.util.Scanner;
public class OddEven{
    public static void main(String[] args){
        int n=6,i;
        int arr[]=new int[n];
        int even[]=new int[n];
        int odd[]=new int[n];
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter array elements:");
        for(i=0;i<=n;i++){
        arr[i]=sc.nextInt();}
        for(i=0;i<=n;i++){
            if(arr[i]%2==0){
                arr[i]=even[i];
                System.out.print("Even elements:");
                for(i=0;i<=n;i++){
                System.out.print(even[i]);}
            }
            else{
                arr[i]=odd[i];
                System.out.print("Odd elements:");
                for(i=0;i<=n;i++){
                System.out.print(odd[i]);
            }}
        }
    }
}