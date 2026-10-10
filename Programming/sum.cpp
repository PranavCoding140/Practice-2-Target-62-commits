//given first number, number of terms, and common difference, find nth term and sum till nth terms.
#include<iostream>
#include<conio.h>
int main(){
    int a,n,d,k,s;
    std::cout<<"Enter first term:";
    std::cin>>a;
    std::cout<<"Enter common difference:";
    std::cin>>d;
    std::cout<<"Enter number of terms:";
    std::cin>>n;
    k=a+(n-1)*d;
    std::cout<<"The nth term is:"<<k;
    s=(n/2)*(a+k);
    std::cout<<"The sum of nth terms is:"<<s;
    return s;
}