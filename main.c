#include <stdio.h>
#include "helpers.h"
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
 

int main(int argc, char *argv[])
{

    printf("Choose one of the following options:\n");

    /** This function should:
     * Input: Take two integers
     * Output: The result of those two integers multipled together as a printf statement
     **/
    printf("0. Integer Multiplication Calculator\n");
    /** This function should:
     * Input: Take two integers
     * Output: The FLOAT result of those two integers dividied together as a printf statement
     * Example: 3 dividied by 2 should give something roughly equal to 1.5
     **/
    printf("1. Integers with Float Result Division Calculator\n");
     /** This function should:
     * Input: Take one string
     * Output: The original string but with one space between each character.
     * Example: User input hello should return h e l l o
     **/
    printf("2. Wide String Generator\n");
    /** This function should:
     * Input: Take one integer
     * Output: The number and whether it is odd or even.
     * Example: User input 5 should return "You input 5, this is an odd number!"
     **/
    printf("3. Odd or Even Number Calculator\n");
    /** This function should:
     * Input: Take one string
     * Output: The sum of all the ASCII value of the letters in a string added together
     * Example: The string aBc should return 262 because 'a' is 97, 'B' is 66 and 'c' is 99
     **/
    printf("4. ASCII Sum of String Calculator \n");
    /** This function should:
     * Input: Take one string
     * Output: The user input string but with order of letters reversed.
     * Example: User input hello should return olleh
     * Hint: You should use a for loop where the iterator is i--
     **/
    printf("5. String flipper!\n");
 

    int selection = get_int("What is your selection?\n");

    // TODO:: Write a 6 case switch statement to run the appropriate function.




    return 0;
}

