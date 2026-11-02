/*
Take two filenames from the user and copy the content
from source file to destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Source file not found!");
        return 1;
    }

    destination = fopen(destinationName, "w");

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully.");

    fclose(source);
    fclose(destination);

    return 0;
}