#include <stdio.h>
#include <cs50.h>

// int main(void)
// {

//     for (int i = 0; i < 3; i++)
//     {
//         printf("meow\n");
//     }
// }

// first void means there's no return value for the function
// void in parentheses means there's no arguments for our function

// void meow(void);
void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i; i < n; i++)
    {
        printf("meow\n");
    }
}