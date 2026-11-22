//Practice Program.seen and solved'''
//'scope resolution required for each new function as they are seperately defined each time'''
#include<iostream>
#include<conio.h>
class ratio //class definition'
{ public: //access specifier'
void assign(int,int);//assign function'
double convert();
void invert();
void print();
private:
int num, den;
};//ratio class defined with member functions as assign,convert,print'
//all functions are public whereas variables are private.done using access specifiers'
int main()
{
ratio x; //object created using ratio class.x contains all properties of ratio.'
x.assign(22,7);//assign function called'
std::cout<<"x=";
x.print();//'print function called printed x=22/7'
std::cout<<"="<<x.convert()<<"\n"; //convert called,did x=22/7=3.14'
x.invert();//made x=1/x'
std::cout<<"1/x=";x.print();
std::cout<<"\n";
getch();
return 0;}//called all functions in main,similar to dsa. now defining'
void ratio::assign(int a, int b)//scope resolution, used when local variable is defined globally'
//assign function is local to ratioclass, now defined globally'
{
num=a;
den=b;//no change in actual num,den only value copied as these are private variables'
}
double ratio::convert()
{
return double((num)/den);//explanation required'''
}
void ratio::invert()
{
int temp=num;
num=den;
den=temp;
}
void ratio::print()
{
std::cout<<num<<"/"<<den;
}

