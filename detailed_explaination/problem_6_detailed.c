// Write a c program to check if number is 2 digit or not.

#include <stdio.h> // Include standard input-output library

int main() {
    int number; // Declare an integer variable to store the user input

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number); // Read the number entered by the user

    // Check if the number is a two-digit number
    if ((number >= 10 && number <= 99) || (number <= -10 && number >= -99)) {
        // Condition 1: Check if the number is between 10 and 99 (positive two-digit number)
        // OR Condition 2: Check if the number is between -10 and -99 (negative two-digit number)
        printf("The number %d is a two-digit number.\n", number); // Print if the number is two-digit
    } else {
        // If the above condition is false, the number is not a two-digit number
        printf("The number %d is not a two-digit number.\n", number); // Print the result
    }

    return 0; // Exit the program successfully
}
