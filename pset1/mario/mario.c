#include <stdio.h>
#include <cs50.h>

// int main(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Width: ");

//      // If 'n' is less than one print "width again"
//     } while (n < 1);

//     // Print the correct number of question marks
//     {
//         for (int i = 0; i < n; i++)
//         {
//             printf("?");
//         }
//         printf("\n");
//     }
// }

void brick(void);
void space(void);
void line(void);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");

    } while (n < 1 || n > 8);

    // Print the correct number of bricks (#)
    {
        // For each row
        for (int i = 0; i < n; i++)
        {

            // print spaces -- number of spaces will always be equal to n - 1
            for (int s = n - 1; s > i; s--)
            {
                space();
            }

            // // Print each left hash
            for (int k = 0; k < i + 1; k++)
            {
                // print a brick
                brick();
            }

            // Print middle gap
            {
                printf("  ");
            }

            // For each right hash
            for (int j = 0; j < i + 1; j++)
            {
                // Print a brick
                brick();
            }
            // Move to next row
            line();
        }
    }
}

void brick(void)
{
    printf("#");
}

void space(void)
{
    printf(" ");
}

void line(void)
{
    printf("\n");
}