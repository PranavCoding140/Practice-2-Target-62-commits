//Implement binary search in c. 
#include<stdio.h>
#define SIZE 10 
int arr[SIZE];
int binsearch(int arr[SIZE], int mid, int low, int high){
    int x;
mid=(low+high)/2;
if(x==arr[mid]){
return mid;
};//best case
if(x<arr[mid]){
high=mid;
mid=(low+high)/2;
int binsearch(int arr[SIZE], int mid, int low, int high);
}
if(x>arr[mid]){
low=mid+1;
mid=(low+high)/2;
int binsearch(int arr[SIZE], int mid, int low, int high);
}
}
int main(){
int x,low=0,high=SIZE;
printf("Enter the elements of array in ascending order:");
scanf("%d", arr[SIZE]);
int binsearch(int arr[SIZE],int mid,int low,int high);//expected declaration specifiers before arr, PATCHED
return 0;
}