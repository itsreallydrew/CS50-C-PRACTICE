#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int scores[3];
    int n = get_int("How many scores? ");
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}