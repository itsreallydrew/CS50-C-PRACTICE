#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string

    //  ASCII characters are 65 - 90 for capital letters
    // 97 - 122 for lower case letters
    // 32 between upper and lower

    // Calculate the length of the word
    int n = strlen(word);

    // Create an array based on the length of the word
    int score[n];

    // Placeholder to calculate the total
    int total_score = 0;

    for (int i = 0; i < n; i++)
    {
        // Change the character of each word to uppercase. Set the index to equal the value of the uppercase character minus 65 -- matches up with the POINTS array
        int index = toupper(word[i]) - 65;

        // printf("%i\n", index);

        // Set the index of each score to be equal to the value of the POINTS at the index defined above
        if (index < 0 || index > 25)
        {
            score[i] = 0;
        }
        else
            score[i] = POINTS[index];

        // Add the points value to the total score
        total_score += score[i];
    }

    // printf("%i\n", total_score);
    return total_score;
}
