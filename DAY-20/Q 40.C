#include <stdio.h>

int main()
{
    long long binary, complement = 0, place = 1;
    int digit;

    scanf("%lld", &binary);

    while (binary != 0)
    {
        digit = binary % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;

        binary = binary / 10;
    }

    printf("%lld", complement);

    return 0;
}