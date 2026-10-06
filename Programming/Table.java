import java.util.Scanner;
public class Table{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int a;
System.out.print("Enter the number whose table is to be printed:");
a=sc.nextInt();
for(int i=1;i<=10;i++){
System.out.print(a*i);
sc.nextLine();
}
}} 
