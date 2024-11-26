// Write a c program to check if number is 2 digit or not.

#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a two-digit number
    if ((number >= 10 && number <= 99) || (number <= -10 && number >= -99)) {
        printf("The number %d is a two-digit number.\n", number);
    } else {
        printf("The number %d is not a two-digit number.\n", number);
    }

    return 0;
}

