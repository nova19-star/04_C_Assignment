// Write a c program to enter a number and find its square.

#include <stdio.h>  // Include the standard input/output library

int main() {
    int number, square;  // Declare two integer variables: one for the input number, and one for the square

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the input number from the user and store it in the 'number' variable
    scanf("%d", &number);

    // Calculate the square of the number and store it in the 'square' variable
    square = number * number;

    // Output the result, showing both the original number and its square
    printf("The square of %d is %d\n", number, square);

    return 0;  // Indicate that the program has ended successfully
}
