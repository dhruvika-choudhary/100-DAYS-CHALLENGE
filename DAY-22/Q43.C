#include <stdio.h>

int main()
{
    int n, original, rem;
    int i, fact, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        rem = n % 10;

        fact = 1;

        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        n = n / 10;
    }

    if (sum == original)
    {
        printf("armStrong number");
    }
    else
    {
        printf("Not armstrong number");
    }

    return 0;
}