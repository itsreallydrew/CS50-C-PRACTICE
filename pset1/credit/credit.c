#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_long("Number: ");
}

/*****************************/
// Steps
/*****************************/

// PROMPT FOR INPUT

/*
    1. Use get long to get the input of the card number.
*/

// CALCULATE CHECKSUM

/*
    1. Multiply every other digit by 2, starting with second to last digit.

        // Start with modulo 100 (% 100) and increase (multiplying by 100 each time) and retrieving the first digit until the loop is complete

    2. Add those products' digits together.

        // Add the integer to the running total

    3. Add the sum to the sum of the digits that weren't multiplied by 2.

    4. IF the total's last digit is 0, number is valid.
*/

// CHECK FOR CARD LENGTH AND STARTING DIGITS

/*
    1. Calculate the length of the card

    2. Determine the starting digit.
*/

// PRINT AMEX, MASTERCARD, VISA, OR INVALID.