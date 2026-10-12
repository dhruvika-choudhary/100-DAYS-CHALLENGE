#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    int sum = 0;

    // Sum of first window
    for(int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }

    int maxSum = sum;

    // Slide the window
    for(int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}