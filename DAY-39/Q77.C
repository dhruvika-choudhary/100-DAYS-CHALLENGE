#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int distinct = 1;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}