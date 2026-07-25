class OverloadDemo
{
void area(int side){
System.out.println(side*side);
}
int area(int l,int b)
{
return(l*b);
}
double area(double l,double b){
return(l*b);
}
double area(double l,int b){
return(l*b);}
double(int a,int b,int c){
double s=(a+b+c)/2;
return(Math.sqrt(s*(s-a)*(s-b)*(s-c)));
}
public static void main(String a[]){
OverloadDemo d=new OverloadDemo();
d.area(3);
int x=d.area(3,4);
System.out.println("Area is:"+x);
System.out.println("Area is:"+d.area(3,4,5));
System.out.println("Area is:"+d.area(2,3.5));
System.out.println("Area is:"+d.area(2.5,3));
}
}
