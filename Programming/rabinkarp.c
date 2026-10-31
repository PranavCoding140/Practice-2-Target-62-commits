#include<stdio.h>
#include<string.h>
#define PRIME 101
int hash(char str[], int len){
    int h=0;
    for(int i=0;i<len;i++){
        h+=str[i];
    }
    return h;
}
int main(){
    char text[100], pattern[50];
    int n,m;
    printf("Enter the text:");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")]= '\0';//error
    printf("Enter the pattern to search:");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")]='\0';
    n=strlen(text);
    m=strlen(pattern);
    int patternHash=hash(pattern, m);
    int currentHash=hash(text, m);
    for(int i=0;i<=n;i++){if(currentHash==patternHash){
        int match=1;
        for(int j=0;j<m;j++){if(text[i+j]!=pattern[j]){
        match=0;    
        break;}}
        if(match){printf("Pattern found at index %d\n", i);}
    }
    if(i<n-m){currentHash=currentHash-text[i]+text[i+m];}
}
return 0;}
