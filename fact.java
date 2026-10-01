//Java program to calculate factorial of a number.
import java.util.Scanner;
public class fact{
    public static void main(String[] args) {
        int n;
        int i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number whose factorial to be found:");
         n = sc.nextInt();
         i = fact(n);
        System.out.println("Factorial is:"+i);
    }
    static int fact(int n){
        int output;
        if(n==1){
            return 1;
        }
        output=fact(n-1)*n;
        return output;
    }
}