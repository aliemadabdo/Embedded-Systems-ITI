#include <stdio.h>

int main() {
    int num1, num2;

    // Input the two numbers from the user
    printf("Enter the first number: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Enter the second number: ");
    fflush(stdout);
    scanf("%d", &num2);

    // Calculate and display the results
    printf("Summation: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("ANDing: %d & %d = %d\n", num1, num2, num1 & num2);
    printf("ORing: %d | %d = %d\n", num1, num2, num1 | num2);
    printf("XORing: %d ^ %d = %d\n", num1, num2, num1 ^ num2);

    return 0;
}

