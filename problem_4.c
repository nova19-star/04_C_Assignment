// Write a c program to check if a number is multiple of 3 or 7.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0 || number % 7 == 0) {
        printf("%d is a multiple of 3 or 7.\n", number);
    } else {
        printf("%d is not a multiple of 3 or 7.\n", number);
    }

    return 0;
}
