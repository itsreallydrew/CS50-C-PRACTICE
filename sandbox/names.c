#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        // Can't explicitly compare strings in C so must use 'strcmp' (string compare)
        // Returns negative value if first string comes before second
        // Returns positive value if first string comes after second
        if (strcmp(names[i], "Ron") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}