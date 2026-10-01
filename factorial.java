//Java program to calculate Permutation and Combination of 2 numbers.
import java.util.Scanner;
public class factorial{
    public static void main(String[] args){
        System.out.println("Enter n according to nCr/nPr:");
        System.out.println("Enter r accroding to nCr/nPr:");
        Scanner sc = new Scanner(System.in);
        int n,r,nCr,nPr;
        n=sc.nextInt();
        r=sc.nextInt();
        nCr=fact(n)/(fact(n-r)*fact(r));
        System.out.println("nCr is:"+nCr);
        nPr=fact(n)/(fact(n-r));
        System.out.println("nPr is:"+nPr);
    }
   static int fact(int n){
    int fact;
        if(n==1){
            return 1;
        }
        else{
        fact=fact(n-1)*n;
        return fact;
        }
    }
}
//MISTAKE 1:- INITIALIZATION/DECLARATION ERROR(AS USUAL)
//MISTAKE 2:- nCr FORMULA ERROR, TOO MANY VARIABLES USED
//MISTAKE 3:- STATIC/NONSTATIC ERROR, IF METHOD IS CALLED IN STATIC MAIN, SHOULD BE DECLARED WITH STATIC KEYWORD DECLARATION