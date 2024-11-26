#include <stdio.h>  // Include the standard input/output library

int main() {
    int number;  // Declare an integer variable to store the number entered by the user

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the input number from the user and store it in the 'number' variable
    scanf("%d", &number);

    // Check if the number is divisible by 3 or 7 using the modulus operator
    if (number % 3 == 0 || number % 7 == 0) {       // 5 gives remainder    // '==' gives True if both having same value   // '||' is logical OR operator
        
        // If the number is divisible by 3 or 7, print that it is a multiple
        printf("%d is a multiple of 3 or 7.\n", number);
    
    } else {
        // If the number is not divisible by either 3 or 7, print that it is not a multiple
        printf("%d is not a multiple of 3 or 7.\n", number);
    }

    return 0;  // End the program successfully
}
