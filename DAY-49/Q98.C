#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, last = 0;

    fgets(name, sizeof(name), stdin);

    printf("%c ", name[0]);

    while(name[i] != '\0' && name[i] != '\n')
    {
        if(name[i] == ' ')
        {
            last = i + 1;
        }

        i++;
    }

    for(i = 1; i < last; i++)
    {
        if(name[i] == ' ' && i + 1 < last)
        {
            printf("%c ", name[i + 1]);
        }
    }

    while(name[last] != '\0' && name[last] != '\n')
    {
        printf("%c", name[last]);
        last++;
    }

    return 0;
}