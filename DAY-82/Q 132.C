/*
Day 82
Q132 (Enum)

Define an enum for traffic lights (RED, YELLOW, GREEN)
and print "Stop", "Wait", or "Go" based on its value.
*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;
    int choice;

    printf("Enter traffic light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &choice);

    light = choice;

    switch(light)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}