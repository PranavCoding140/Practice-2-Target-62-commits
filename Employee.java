public class Employee{
String name;
int id;
double salary;
Employee(){
name="Unknown";
id=0;
salary=0.0;
}
Employee(String n, int i){
name=n;
id=i;
salary=25000;
}
Employee(String n, int i, double s){
name=n;
id=i;
salary=s;
}
void display(){
System.out.println("Employee Name:"+name,"ID:"+id,"Salary"+salary);
}
public static void main(String[] args){
Employee e1=new Employee();
Employee e2=new Employee("Rahul", 102);
Employee e3=new Employee("Sneha", 103, 55000);
Employee e4=e2;
e1.display();
e2.display();
e3.display();
e4.display();
}
}
