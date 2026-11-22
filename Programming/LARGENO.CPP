#include<iostream>
#include<conio.h>
int main()
{
int a,b,c;
std::cout<<"Enter 3 numbers:";
std::cin>>a>>b>>c;
if(a>b, a>c)
std::cout<<"Largest number is:"<<a;
else if(b>a, b>c)
std::cout<<"Largest number is:"<<b;
else if(c>a, c>b)
std::cout<<"Largest number is:"<<c;
else std::cout<<"Invalid case";
getch();
return 0;};
