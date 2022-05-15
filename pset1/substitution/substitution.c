#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string key;
int ALPHA[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

int main(int argc, string argv[])
{
    key = argv[1];
    int k_len = strlen(key);

    if (!(argv[1]) || argc > 2)
    {
        printf("Please provide a key. Usage: ./substitution key\n");
    }

    if (k_len < 26 || k_len > 26)
    {
        printf("Invalid length. Key must be 26 characters.\n");
        return 1;
    }

    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (!(isalpha(key[i])))
        {
            printf("Invalid character. Character must be alphabetic.\n");
            return 1;
        }
    }

    for (int i = 0, n = strlen(key); i < n; i++)
    {
        int temp = key[i];

        if (key[i] == temp)
        {
            printf("Invalid key. Repeating letters not allowed.\n");
            return 1;
        }
        else if (key[i] == temp - 32)
        {
            printf("Invalid key. Repeating letters not allowed.\n");
            return 1;
        }
        else if (key[i] == temp + 32)
        {
            printf("Invalid key. Repeating letters not allowed.\n");
            return 1;
        }
    }

    string text = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (!(isalpha(text[i])))
        {
            printf("%c", text[i]);
        }
        else
        {
            for (int j = 0, n = strlen(key); j < n; j++)
            {

                // Find the index where text matches alphabet
                // Print the corresponding index from the key

                // If they are the same case print the value from the key
                if (text[i] == ALPHA[j])
                {
                    printf("%c", key[j]);
                }
                // If text is lowercase print lowercase value from key
                else if (toupper(text[i]) == ALPHA[j])
                {
                    printf("%c", tolower(key[j]));
                }
                // If text is uppercase print the uppercase value from the key
                else if ((text[i]) == tolower(ALPHA[j]))
                {
                    printf("%c", toupper(key[j]));
                }
            }
        }
    }
    printf("\n");
    return 0;
}

/****************************/
// STEPS
/****************************/

// 1. GET THE KEY

/*
    The second CLI argument will be the key.
*/

// 2. VALIDATE THE KEY

/*
    Check the key length
    If key is less than or greater than 26 characters (0 - 25), print error message

    Check for non-alphabetic characters
    If key is a number or symbol, print error message

    Check for repeated characters (case-insensitive)
    If key has two of the same character, print error message
*/

// 3. GET PLAINTEXT

/*
    Use get_string to get the plaintext from the input
*/

// 4. ENCIPHER

/*
    For each alphabetic character, determine the letter it maps to

    Preserve case

    Leave non-alphabetic characters as-is (unchanged)
*/

// 5. PRINT CIPHERTEXT

// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// YTNSHKVEFXRBAUQZCLWDMIPGJO