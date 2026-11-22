#include<iostream>
#include<conio.h>
#include<math.h>
int main()
{
int p,r,t,s;
std::cout<<"Enter principal amount:";
std::cin>>p;
std::cout<<"Enter rate of interest:";
std::cin>>r;
std::cout<<"Enter time period in years:";
std::cin>>t;
s=(p*r*t)/100;
std::cout<<"Simple interest is:"<<s;
std::cout<<"Amount is:"<<s+p;
getch();
return 0;
};