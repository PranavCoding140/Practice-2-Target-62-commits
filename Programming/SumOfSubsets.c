#include <stdio.h>
#define MAX 20
int w[MAX + 1];  
int x[MAX];       
int n, m;         
int count = 0;
void sortWeights(void)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (w[j] > w[j + 1]) {
                t = w[j];
                w[j] = w[j + 1];
                w[j + 1] = t;
            }
}
void printSolution(int k)
{
    int i;
    count++;
    printf("Solution %d: { ", count);
    for (i = 0; i <= k; i++)
        if (x[i] == 1)
            printf("%d ", w[i]);
    printf("}   x = (");
    for (i = 0; i < n; i++)
        printf("%d%s", (i <= k) ? x[i] : 0, (i < n - 1) ? ", " : "");
    printf(")\n");
}
void sumOfSub(int s, int k, int r)
{
    if (k >= n)
        return;
    x[k] = 1;
    if (s + w[k] == m) {
        printSolution(k);                       
    }
    else if (s + w[k] + w[k + 1] <= m) {        
        sumOfSub(s + w[k], k + 1, r - w[k]);
    }
    if ((s + r - w[k] >= m) && (s + w[k + 1] <= m)) { 
        x[k] = 0;
        sumOfSub(s, k + 1, r - w[k]);
    }
}
int main()
{
    int i, total = 0;
    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);
    printf("Enter %d weights (positive integers): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &w[i]);
        total += w[i];
    }
    w[n] = 0;                                   
    printf("Enter target sum M: ");
    scanf("%d", &m);
    sortWeights();                              
    printf("\nSorted weights: ");
    for (i = 0; i < n; i++){
        printf("%d ", w[i]);}
    printf("\nTarget sum M = %d\n\n", m);
    if (total < m || w[0] > m){
        printf("No solution possible.\n");}
    else {
        sumOfSub(0, 0, total);
        if (count == 0)
            printf("No subset with the given sum exists.\n");
    }
    return 0;
}