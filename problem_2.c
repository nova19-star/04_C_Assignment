// Write a c program to enter a number and find its square.

#include <stdio.h> 

int main() {
    int number, square; 

    printf("Enter a number: ");
        scanf("%d", &number);

    square = number * number;

    printf("The square of %d is %d\n", number, square);

    return 0;  
}

