#include <stdio.h>
#include <string.h>
#define MAX 1000
void computeLPS(char pattern[], int m, int lps[])
{
    int len = 0;        
    int i = 1;
    lps[0] = 0;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0){
                len = lps[len - 1];}     
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int KMPSearch(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);
    int lps[MAX];
    int i = 0;          
    int j = 0;          
    int found = 0;
    computeLPS(pattern, m, lps);
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        if (j == m) {                  
            printf("Pattern found at index %d\n", i - j);
            found++;
            j = lps[j - 1];             
        }
        else if (i < n && text[i] != pattern[j]) {
            if (j != 0){
                j = lps[j - 1];}         
            else{
                i++;}
        }
    }
return found;
}
int main(void)
{
    char text[MAX], pattern[MAX];
    int lps[MAX], m, i;
    printf("Enter the text: ");
    fgets(text, MAX, stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("Enter the pattern: ");
    fgets(pattern, MAX, stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    m = strlen(pattern);
    if (m == 0) {
        printf("Pattern cannot be empty.\n");
        return 0;
    }
    computeLPS(pattern, m, lps);
    printf("\nLPS array: ");
    for (i = 0; i < m; i++){
        printf("%d ", lps[i]);}
    printf("\n\n");
    if (KMPSearch(text, pattern) == 0){
        printf("Pattern not found in the text.\n");}
    return 0;
}