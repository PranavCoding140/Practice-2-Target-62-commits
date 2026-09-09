#include<stdio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;
int min, mincost=0;
int cost[20][20], parent[20];
int find(int);
int uni(int,int);
int main(){
printf("\n\n\t Implementation of Kruskal's Algorithm\n\n");
printf("Enter the number of vertices:");
scanf("%d", &n);
printf("\n Enter the cost adjacency matrix:");
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
scanf("%d", &cost[i][j]);
if(cost[i][j]==0){
cost[i][j]=999;
}
}
}
printf("\n The edges of Minimum Cost Spanning Tree are:\n\n");
while(ne<n){
for(i=1,min=999;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(cost[i][j]<min){
min=cost[i][j];
a=u=i;
b=v=j;
}}}
u=find(u);
v=find(v);
if(uni(u,v)){
printf("\n%d edge(%d %d)=%d", ne++, a, b, min);
mincost+=min;
}
cost[a][b]=cost[b][a]=999;
}
printf("\n\n\t Minimum Cost=%d\n", mincost);
return 0;
}
int find(int i){
while(parent[i]){i=parent[i];
return 1;
}}
int uni(int i, int j){
if(i!=j){
parent[j]=1;
return 1;}
return 0;
}
