//Program to implement 0/1 knapsack in c
#include<stdio.h>
#define MAX 50
int max(int a, int b){
    return (a>b) ? a:b;
}
int main(){
    int n, W, i, w;
    int wt[MAX+1], val[MAX+1];
    int K[MAX+1][MAX*10+1];
    printf("Enter the number of items:");
    scanf("%d", &n);
    printf("Enter weights of the items:\n");
    for(i=1;i<=n;i++){
        scanf("%d", &wt[i]);
    }
    printf("Enter values of profits:\n");
    for(i=1;i<=n;i++){scanf("%d", &val[i]);}
    printf("Enter knapsack capacity:");
    scanf("%d", &W);
    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(i==0 || w==0){
                K[i][w]=0;
            }
            else if(wt[i]<=w){
                K[i][w]=max(val[i]+K[i-1][w-wt[i]], K[i-1][w]);
            }
            else{
                K[i][w]=K[i-1][w];
            }
        }
    }
    printf("\n DP Table:\n");
    for(i=0;i<=n;i++){for(w=0;w<=W;w++){printf("%4d", K[i][w]);}printf("\n");}
    printf("Maximum profit: %d\n", K[n][W]);
    printf("Items Selected:");
    w=W;
    for(int i=n;i>0 && w>0;i--){
        if(K[i][w]!=K[i-1][w]){printf("%d", i);
        w-=wt[i];}
    }
    printf("\n");
    return 0;
}