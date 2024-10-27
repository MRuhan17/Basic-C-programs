#include <stdio.h>

int main() {
    int num, count = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num; // Make the number positive for counting digits
    }

    // Count the number of digits
    if (num == 0) {
        count = 1; // Special case for zero
    } else {
        while (num != 0) {
            num /= 10; // Remove the last digit
            count++;   // Increment the digit count
        }
    }

    // Display the result
    printf("The number of digits is: %d\n", count);

    return 0;
}
