//Implement knapsack problem in c.
#include<stdio.h>
void knapsack(int num, float w[], float p[], float c){
float x[20], tp=0;
int i,j,n;
n=c;
for(i=0;i<n;i++){
x[i]=0.0;
if(w[i]>n){
break;}
else{
x[i]=1.0;
tp=tp+p[i];
n=n-w[i];}}
if(i<n){
x[i]=n/w[i];
tp=tp+(x[i]*p[i]);
printf("The resulting vector is:");
for(i=0;i<n;i++){
printf("%f\t", x[i]);
printf("\n Maximum profit is:- %f", tp);
}}
int main(){
float w[20], p[20], c;
int num,i,j;
float ratio[20], temp;
printf("\n Enter the number of objects:");
scanf("%d", &num);
printf("\n Enter the weights and profits of each object:");
for(i=0;i<num;i++){
scanf("%f%f", &w[i], &p[i]);}
printf("\n Enter the capacity of knapsack:-");
scanf("%f", &c);
for(i=0;i<num;i++){
ratio[i]=p[i]/w[i];}
for(i=0;i<num;i++){
for(j=i+1;j<num;j++){
if(ratio[i]>ratio[j]){
temp=ratio[j];
ratio[j]=ratio[i];
ratio[i]=temp;
temp=w[j];
w[j]=w[i];
w[i]=temp;
temp=p[j];
p[j]=p[i];
p[i]=temp;}}}
knapsack(num,w,p,c);
return 0;
}
