/*
Write a program to find the length of the longest substring
without repeating characters.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k, max = 0, count;

    scanf("%s", s);

    int n = strlen(s);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = i; j < n; j++)
        {
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                    break;
            }

            if(k != j)
                break;

            count++;

            if(count > max)
                max = count;
        }
    }

    printf("%d", max);

    return 0;
}