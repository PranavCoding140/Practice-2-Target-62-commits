#include<stdio.h>
#include<string.h>
void naiveStringMatch(char text[], char pattern[]){
    int n=strlen(text);
    int m=strlen(pattern);
    printf("\nText: %s\n", text);
    printf("Pattern: %s\n\n", pattern);
    int found=0;
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(text[i+j]!=pattern[j]){break;}
        }
        if(j==m){
            printf("Pattern found at index %d\n", i);
            found=1;
        }
    }
    if(!found){printf("Pattern not found in the text\n");}
}
int main(){
    char text[100], pattern[50];
    printf("Enter the text:");
    gets(text);
    printf("Enter the pattern to search:");
    gets(pattern);
    naiveStringMatch(text, pattern);
    return 0;
}