#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, match;

    scanf("%s %s", str1, str2);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    for(i = 0; i < len1; i++)
    {
        match = 1;

        for(j = 0; j < len1; j++)
        {
            if(str1[(i + j) % len1] != str2[j])
            {
                match = 0;
                break;
            }
        }

        if(match == 1)
        {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not rotation");

    return 0;
}