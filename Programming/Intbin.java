//Write a program to convert integer number to binary.
import java.util.Scanner;
public class Intbin{
    public static void main(String[] args){
        int a,r;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the integer number:");
        a=sc.nextInt();
        if(a==1){
                System.out.print("STOPPED DIVISION. OBTAINED RESULT.");
            }
        while(a>0){
            r=a%2;
            a=a/2;
            System.out.println(r);
        }
    }
}