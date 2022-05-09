#include <cs50.h>
#include <stdio.h>
#include <string.h>

// creating our own custom data structure -- 'person' defines the name of the struct
typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}