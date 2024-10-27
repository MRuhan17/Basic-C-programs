#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;  // Use a larger data type to handle large results

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
