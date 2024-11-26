// Write a c program to add (1/2 + 2/2 + 3/2 + 4/2.....n/2)

#include <stdio.h>

int main() {
    int n; // Variable for the upper limit of the series
    float sum = 0; // To store the total sum of the series

    // Ask the user to input the value of n
    printf("Enter the value of n (how far the series should go): ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += (float)i / 2; // Add each term (i / 2) to the sum
    }

    // Display the sum
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
