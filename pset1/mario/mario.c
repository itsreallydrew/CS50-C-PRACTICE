#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");

        // If 'n' is less than one print "width again"
    } while (n < 1);

    // Print the correct number of question marks
    {
        for (int i = 0; i < n; i++)
        {
            printf("?");
        }
        printf("\n");
    }
}
