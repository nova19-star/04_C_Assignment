// Write a c program to enter a number & find out its square and check it is perfect square or not.

#include <stdio.h>
#include <math.h> 

int main() {
    int number, square;
    int sqrt_result;   

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    printf("The square of %d is %d.\n", number, square);

    sqrt_result = (int)sqrt(square);

    if (sqrt_result * sqrt_result == square) {
        printf("%d is a perfect square.\n", square);
    } else {
        printf("%d is not a perfect square.\n", square);
    }

    return 0;
}
