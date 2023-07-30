#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter the first number: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Enter the second number: ");
    fflush(stdout);
    scanf("%d", &num2);

    printf("Enter the third number: ");
    fflush(stdout);
    scanf("%d", &num3);

    // Print the numbers in reversed order
    printf("Reversed order: %d, %d, %d\n", num3, num2, num1);

    return 0;
}

