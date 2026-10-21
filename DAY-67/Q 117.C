/*
Write a program to merge two sorted arrays
such that the merged array is also sorted.
*/

#include <stdio.h>

int main()
{
    int m, n, i = 0, j = 0;

    scanf("%d", &m);
    int a[m];

    for(int x = 0; x < m; x++)
        scanf("%d", &a[x]);

    scanf("%d", &n);
    int b[n];

    for(int x = 0; x < n; x++)
        scanf("%d", &b[x]);

    while(i < m && j < n)
    {
        if(a[i] <= b[j])
            printf("%d ", a[i++]);
        else
            printf("%d ", b[j++]);
    }

    while(i < m)
        printf("%d ", a[i++]);

    while(j < n)
        printf("%d ", b[j++]);

    return 0;
}