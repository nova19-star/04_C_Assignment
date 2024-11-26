#include <stdio.h>

// Function to convert Fahrenheit to Celsius
// Formula: Celsius = (Fahrenheit - 32) * 5 / 9
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;  // Convert and return Celsius value
}

int main() {
    float fahrenheit, celsius;  // Declare two variables to store temperatures

    // Ask the user to input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    
    // Read the input Fahrenheit value from the user
    scanf("%f", &fahrenheit);

    // Call the function to convert Fahrenheit to Celsius
    celsius = fahrenheitToCelsius(fahrenheit);

    // Display the result in Celsius with 2 decimal places
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;  // End the program successfully
}
