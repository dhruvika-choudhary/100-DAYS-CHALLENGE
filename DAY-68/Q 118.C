/*
Write a program to take an input array of size n.
The array contains all integers from 0 to n except one.
Print the missing number.
*/

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}