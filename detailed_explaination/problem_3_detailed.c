#include <stdio.h>  // Include the standard input/output library

int main() {
    int age;  // Declare an integer variable to store the person's age

    // Prompt the user to enter their age
    printf("Enter your age: ");
    
    // Read the input value from the user and store it in the 'age' variable
    scanf("%d", &age);

    // Check if the age is 18 or greater to determine voting eligibility using if-else condition
    if (age >= 18) {
        // If the person is 18 or older, they are eligible to vote
        printf("You are eligible to vote.\n");
    } else {
        // If the person is under 18, they are not eligible to vote
        printf("You are not eligible to vote because you are under 18 years old.\n");
    }

    return 0;  // End the program successfully
}
