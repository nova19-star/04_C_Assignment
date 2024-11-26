// Write a c program to check if a character is vowel or consonant.

#include <stdio.h> // Include standard input-output library

int main() {
    char ch; // Declare a variable to store the input character

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch); // Read the character entered by the user

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character '%c' is a vowel.\n", ch); // Print if the character is a vowel
    } 
    // Check if the character is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character '%c' is a consonant.\n", ch); // Print if the character is a consonant
    } 
    // If the input is not an alphabet
    else {
        printf("The character '%c' is not a letter.\n", ch); // Handle invalid input
    }

    return 0; // Exit the program successfully
}
