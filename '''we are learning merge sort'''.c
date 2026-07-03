'''we are learning merge sort'''
#include<stdio.h>
void divide(int a[], int small, int large)
{
    int mid;
    if(small<large)
    {
        mid=(large+small)/2;
        divide(a,small,mid);'''recursion, divided array into 2 parts'''
        divide(a,mid+1,large);'''second part of array'''
        merge(a,small,mid,large);'''function call'''
    }
}
void merge(a,small,mid,large)'''function defintion'''
{
    int x,y,temp[100],z=0;
    x=small;'''defined the start of array in x'''
    y=mid+1;'''considered first half of array''' 
    while(x<=mid&&y<=large)
    {
        if(a[x]<a[y])
        {
            temp[z]=a[x];
            z++;
            x++;
        }
        else{
            temp[z]=a[y];
            z++;
            y++;
        }
    }
    while(x<=mid)
    {
        temp[z++]=a[x++];
    }
    while(y<=mid)
    {
        temp[z++]=a[y++];
    }
    z=0;
    for(x=small;x<=large;x++)
    {
        a[x]=temp[z];
        z++;
    }
}