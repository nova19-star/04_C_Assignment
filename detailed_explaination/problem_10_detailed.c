// Write a c program to add (1/4 + 3/4 + 5/4 +7/4+...n/4)

#include <stdio.h> // Include standard input-output library

int main() {
    int n; // Variable to store the number of terms in the series
    printf("Enter the number of terms (n): ");
    scanf("%d", &n); // Take input from the user for the number of terms

    double sum = 0.0; // Initialize the sum of the series to 0.0

    // Loop to calculate the sum of the series
    for (int i = 0; i < n; i++) { 
        // Each term in the series is (2*i + 1)/4
        // (2*i + 1) generates the odd numbers: 1, 3, 5, 7, ...
        sum += (2.0 * i + 1) / 4.0; // Add the current term to the sum
    }

    // Print the final sum of the series
    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0; // Indicate successful program termination
}