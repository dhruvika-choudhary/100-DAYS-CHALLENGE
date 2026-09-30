#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0;
    int start = 0, length = 0, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if(length > maxLength)
            {
                maxLength = length;

                for(j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            length = 0;
            start = i + 1;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
        else
        {
            length++;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}