/*we are learning merge sort*/
#include <stdio.h>
#define SIZE 10

void merge(int a[], int small, int mid, int large)
{
    int x, y, z = 0, temp[SIZE];
    x = small;          /* start of left half  */
    y = mid + 1;        /* start of right half */

    while (x <= mid && y <= large)
    {
        if (a[x] <= a[y])
            temp[z++] = a[x++];
        else
            temp[z++] = a[y++];
    }
    while (x <= mid)        /* leftover of left half  */
        temp[z++] = a[x++];
    while (y <= large)      /* leftover of right half */
        temp[z++] = a[y++];

    z = 0;
    for (x = small; x <= large; x++)   /* copy back */
        a[x] = temp[z++];
}

void divide(int a[], int small, int large)
{
    int mid;
    if (small < large)
    {
        mid = (small + large) / 2;
        divide(a, small, mid);        /* sort left half  */
        divide(a, mid + 1, large);    /* sort right half */
        merge(a, small, mid, large);  /* combine         */
    }
}

int main()
{
    int a[SIZE], i;

    printf("Enter %d elements: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);

    divide(a, 0, SIZE - 1);

    printf("Sorted array: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}