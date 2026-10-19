#include<stdio.h>
#include<stdlib.h>
#define N 4
int q[N];
int safe(int r, int c){
    for(int i=0;i<r;i++){
        if(q[i]==c || abs(q[i]-c)==abs(r-i)){
            return 0;
        }
    }
    return 1;
}
void place(int row){
    if(row==N){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(q[i]==j){printf("Q");}
                else{printf(".");}
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    for(int col=0;col<N;col++){
        if(safe(row, col)){
            q[row]=col;
            place(row+1);
        }
    }
}
int main(){
    printf("All solutions for 4-Queens Problem:\n\n");
    place(0);
    return 0;
}
//solution not getting printed for 4 queens