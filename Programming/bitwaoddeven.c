//program to to check even/odd by bitwise and
#include<stdio.h>
void bitwaoddeven(int a){
    if(a&1){printf("Odd");}
    else{printf("Even");}
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    bitwaoddeven(a);
    return 0;
}