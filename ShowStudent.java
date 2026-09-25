class Student
{
int id;
int creditHours;
int creditPoints;
double gpa;
void setData(int i, int ch, int cp, int g)
{
id=i;
creditHours=ch;
CreditPoints=cp;
gpa=g;
}
void display()
{
System.out.println("ID:" +id);
System.out.println("Credit Hours:" +creditHours);
System.out.println("Credit Points:" +CreditPoints);
System.out.println("GPA:" +gpa);
}
void calcGPA()
{
gpa=(double) CreditPoints/creditHours;
}
}
public class showStudent{
public static void main(String args[]){
Student s1=new Student();
s1.setData(133, 80, 267, 0.00);
s1.display();
System.out.println("Student Info after calculating GPA");
s1.calcGPA();
s1.display();
}
}
