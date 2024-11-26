#include <stdio.h> // Include the standard input-output library

int main() {
    int num1, num2, num3; // Declare three integer variables to store the input numbers

    printf("Enter three numbers: "); // Prompt the user to enter three numbers
    scanf("%d %d %d", &num1, &num2, &num3); // Read the three numbers from the user

    // Using else-if condition

    // Check if num1 is the smallest number
    if (num1 <= num2 && num1 <= num3) {
        printf("The smallest number is: %d\n", num1); // If true, print num1 as the smallest
    }
    // Check if num2 is the smallest number
    else if (num2 <= num1 && num2 <= num3) {
        printf("The smallest number is: %d\n", num2); // If true, print num2 as the smallest
    }
    // If neither num1 nor num2 is the smallest, then num3 must be the smallest
    else {
        printf("The smallest number is: %d\n", num3); // Print num3 as the smallest
    }

    return 0; // Exit the program successfully
}
