// Write a c program to enter a number & find out its square and check it is perfect square or not.

#include <stdio.h>
#include <math.h> // Include math library for square root function

int main() {
    int number, square; // Variables to store the input number and its square
    int sqrt_result;    // Variable to store the square root result

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the square of the number
    square = number * number;
    printf("The square of %d is %d.\n", number, square);

    // Calculate the square root of the square
    sqrt_result = (int)sqrt(square);

    // Check if the square is a perfect square
    if (sqrt_result * sqrt_result == square) {
        printf("%d is a perfect square.\n", square);
    } else {
        printf("%d is not a perfect square.\n", square);
    }

    return 0;
}