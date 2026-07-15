/*Let us C problem 1' 'referred code:DSA Practice Program 1 
Twenty-five numbers are entered from the keyboard into an
array. The number to be searched is entered through the
keyboard by the user. Write a program to find if the number to
be searched is present in the array and if it is present, display
the number of times it appears in the array.*/
#include<stdio.h>
#define SIZE 25
int main()
{
    int arr[SIZE];
    printf("Enter 25 elements:");
    scanf("%d", &arr);
    FindEle(arr); /*Function call for FindEle*/
    count(); /*Function call for count*/
};
int FindEle(int) /*Function definition for FindEle*/
{
    int k;/*Number taken for finding in array*/
    printf("Enter the number to find:");
    scanf("%d", &k);
    if(k==arr){
        printf("%d", &k);
    }
    else{
        printf("Number not found.\n");
    }
}
int count(int n){
    int i;
    for(i=0;i<=SIZE;i++){
        if(arr[i]==k){
            printf("count:", &n);
        }
    }
}
