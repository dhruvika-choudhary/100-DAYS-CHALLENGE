#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (sum == original)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }

    return 0;
}