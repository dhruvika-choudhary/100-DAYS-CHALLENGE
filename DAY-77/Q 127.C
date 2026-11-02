/*
Read text from input.txt, convert lowercase letters
to uppercase and write it to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");

    if (input == NULL)
    {
        printf("Input file not found!");
        return 1;
    }

    output = fopen("output.txt", "w");

    while ((ch = fgetc(input)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted successfully.");

    return 0;
}