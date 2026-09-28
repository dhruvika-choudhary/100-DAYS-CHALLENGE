#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 1, middle, result;

    scanf("%d", &n);

    last = n % 10;

    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    middle = (n % digits) / 10;

    result = last * digits + middle * 10 + first;

    printf("%d", result);

    return 0;
}