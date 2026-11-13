/*
Q139 (Enum)
Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Colors
{
    RED = 1,
    GREEN = 5,
    BLUE = 10
};

int main()
{
    enum Colors c1 = RED;
    enum Colors c2 = GREEN;
    enum Colors c3 = BLUE;

    printf("RED = %d\n", c1);
    printf("GREEN = %d\n", c2);
    printf("BLUE = %d\n", c3);

    return 0;
}
