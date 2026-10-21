#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];
    int nextGreater;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        nextGreater = -1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if(i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}