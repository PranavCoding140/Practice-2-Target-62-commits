#include<iostream>
#include<conio.h>
#include<math.h>
int main()
{
int a;
int b;
std::cout<<"Enter first number:";
std::cin>>a;
std::cout<<"Enter second number:";
std::cin>>b;
char op;
std::cout<<"Enter operator:";
std::cin>>op;
double result;
switch (op){
case '+':result=a+b;
break;
case '-':result=a-b;
break;
case '*':result=a*b;
break;
case '/':
if(b!=0)
result=a/b;
else{
std::cout<<"Division by zero is not possible.";
}
break;
default:
std::cout<<"Invalid operator!"<<std::endl;
};
std::cout<<"Result:"<<result<<std::endl;
getch();
return 0;}