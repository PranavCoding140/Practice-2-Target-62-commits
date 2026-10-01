#include<stdio.h>
void quicksort(int a[], int first, int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first+1;
j=last;
while(i<=j){
while(i<=j && a[i]<=a[pivot]){
i++;
}
while(i<=j && a[j]>a[pivot]){
j--;
}
if(i<j){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quicksort(a, first, j-1);
quicksort(a, j+1, last);
}
}
int main(){
int a[100], n, i;
printf("Enter number of elements:");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
quicksort(a, 0, n-1);
printf("Sorted array:");
for(i=0;i<n;i++){
printf("%d", a[i]);
}
return 0;
}
