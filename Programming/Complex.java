//SEEN SOLUTION. Variable Initialization errors to be resolved.The errors came from reading variables before assigning them. 
//Write a Java program to add 2 complex numbers.
import java.util.Scanner; 
public class Complex{
    int r;
    int i;
    Complex(int r, int i){
        this.r=r;
        this.i=i;
    }
    Complex add(Complex other){
        return new Complex(this.r+other.r,this.i+other.i);
    }
    void display(int a1,int a2,int b1,int b2){//had to assign parameters in C style.
        int a=a1+a2;
        int b=b1+b2;
        System.out.print(a+"+"+b+"i"); 
    }
    public static void main(String[] args){
        int a1,b1,a2,b2;
        Complex result;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the real part of the first Complex Number:");
        a1=sc.nextInt();
        System.out.print("Enter the imaginary part of the first Complex Number:");
        b1=sc.nextInt();
        System.out.print("Enter the real part of the second Complex Number:");
        a2=sc.nextInt();
        System.out.print("Enter the imaginary part of the second Complex Number:");
        b2=sc.nextInt();
        Complex c1= new Complex(a1, b1);
        Complex c2= new Complex(a2, b2);
        result=c1.add(c2);
        System.out.print("Sum:");
        result.display(a1,a2,b1,b2);//had to call using C style.
    }
}