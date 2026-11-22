#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 20
int stack[SIZE],top=-1;
void push()
{
int val;
if(top==SIZE-1)
{
cout<<"Stack Overflow.";
}
else
{
cout<<"Enter the value to be inserted:";
cin>>val;
top++;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
cout<<"Stack Underflow.";
}
else
{
cout<<"Value popped is:"<<stack[top];
top--;
}
}
void peek()
{
if(top==-1)
{
cout<<"Stack is empty.";
}
else
{
cout<<"Topmost value is:"<<stack[top];
}
}
void display()
{
if(top==-1)
{
cout<<"Stack is empty.";
}
else
{
cout<<"Stack elements:";
for(int i=top; i>=0; i--)
{
cout<<stack[i];
}
}
}
int main()
{
int choice;
while(choice!=5)
{
cout<<"1.Push 2.Pop 3.Peek 4.Display 5.Exit";
cin>>choice;
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: display();
break;
case 5: exit(0);
break;
default:
cout<<"Invalid choice.";
}
}
return 0;
}