#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;
    int pivot = -1;

    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;

        rightSum = n * (n + 1) / 2
                   - (x - 1) * x / 2;

        if(leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}