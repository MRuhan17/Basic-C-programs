#include <stdio.h>

int main() {
    int num, largestDigit = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit of the number
    while (num != 0) {
        digit = num % 10; // Extract the last digit

        // Update largestDigit if the current digit is greater
        if (digit > largestDigit) {
            largestDigit = digit;
        }

        num /= 10; // Remove the last digit
    }

    // Display the result
    printf("The largest digit is: %d\n", largestDigit);

    return 0;
}
