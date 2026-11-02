/*
Store multiple student records into a file using fprintf().
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Unable to open file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("\nName: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %d\n", marks);
    }

    fclose(fp);

    return 0;
}