#include<stdio.h>
#include<string.h>
int temp[30][30];
char first_seq[30],sec_seq[30];
char ls[30][30];
int c,d;
void lcsalgo();
void print(int a, int b);
int main(){
printf("\n Enter the first sequence:\t");
scanf("%s", first_seq);
printf("\n Enter the second sequence:\t");
scanf("%s", sec_seq);
lcsalgo();
printf("\n Length of LCS=%d", temp[c][d]);
printf("\n Longest Common Subsequence:\t");
print(c,d);
printf("\n");
return 0;
}
void lcsalgo(){
int a,b;
c=strlen(first_seq);
d=strlen(sec_seq);
for(a=0;a<=c;a++){
temp[a][0]=0;}
for(b=0;b<=d;b++){
temp[0][b]=0;}
for(a=1;a<=c;a++){
for(b=1;b<=d;b++){
if(first_seq[a-1]==sec_seq[b-1]){
temp[a][b]=temp[a-1][b-1]+1;
ls[a][b]='c';}
else if(temp[a-1][b]>=temp[a][b-1]){
temp[a][b]=temp[a-1][b];
ls[a][b]='u';
}
else{
temp[a][b]=temp[a][b-1];
ls[a][b]='l';}
}
}
}
void print(int a,int b){
if(a==0||b==0){
return;
}
if(ls[a][b]=='c'){
print(a-1,b-1);
printf("%c", first_seq[a-1]);}
else if(ls[a][b]=='u'){
print(a-1,b);}
else{print(a,b-1);}}
