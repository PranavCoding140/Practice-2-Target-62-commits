//java program to print AP of numbers given all data
import java.util.Scanner;
public class APandGP{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int a,d,n,r;
System.out.print("Enter the first term of AP and GP(same term):");
a=sc.nextInt();
System.out.print("Enter common difference for AP:");
d=sc.nextInt();
System.out.print("Enter common ratio for GP:");
r=sc.nextInt();
System.out.print("Enter the number of terms:");
n=sc.nextInt();
System.out.print("Terms of AP:");
for(int i=1;i<=n;i++){
System.out.print(a+(i-1)*d);
}
System.out.print("Terms of GP:");
for(int i=1;i<=n;i++){
    int term=(int)(a*Math.pow(r,i-1));
    System.out.print(term);} //removed variable t from main declarations(a,n,d)etc 
}//and added term variable, used power function to calculate GP terms
}
/*how to use power operator in java
use the  .pow method
eg:- double result = Math.pow(2,3) gives 8 
*/
//Input a=2,d=5,r=3,n=4
/*Output Terms of AP:2,7,12,17
Terms of GP:2,6,18,54*/
