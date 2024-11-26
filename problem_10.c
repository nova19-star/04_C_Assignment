// Write a c program to add (1/4 + 3/4 + 5/4 +7/4+...n/4)

#include <stdio.h> 

int main() {
    int n; 
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double sum = 0.0; 

    for (int i = 0; i < n; i++) { 
        sum += (2.0 * i + 1) / 4.0; 
    }

    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0; 
}