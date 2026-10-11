//implement selection sort in C.
#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selSort(int arr[], int size){
    for(int i=0;i<size;i++){
        int min_idx=i,j;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=j){
            swap(&arr[i], &arr[min_idx]);
        }
    }
}
void print(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main(){
    int data[]={64,25,12,22,11};
    int size=sizeof(data)/sizeof(data[0]);
    printf("Unsorted array:\n");
    print(data, size);
    selSort(data, size);
    printf("Sorted array:\n");
    print(data, size);
    return 0;
}