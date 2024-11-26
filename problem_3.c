// Write a c program to check if a person is eligible to vote based on age.

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote because you are under 18 years old.\n");
    }

    return 0;
}
