#include <stdio.h>

int main() {
    int height;

    // Input the height of the pyramid from the user
    printf("Enter the height of the pyramid: \n");
    fflush(stdout);
    scanf(" %d", &height);

    // Draw the pyramid
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

