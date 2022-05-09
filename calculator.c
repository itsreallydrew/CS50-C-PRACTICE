#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for x
    float x = get_int("x: ");

    // Prompt user for y
    float y = get_int("y: ");

    // Perform division
    printf("%.5f\n", x / y);
}