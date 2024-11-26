// Write a c program to add (1/2 + 2/2 + 3/2 + 4/2.....n/2)

#include <stdio.h>

int main() {
    int n; 
    float sum = 0; 

    printf("Enter the value of n (how far the series should go): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)i / 2; 
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
