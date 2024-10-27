#include <stdio.h>

int main() {
    int number, reversed = 0, original, lastDigit;

    // Ask the user to enter a number for palindrome check
    printf("Enter a number to check if it's a palindrome: ");
    scanf("%d", &number);

    // Keep a copy of the original number for comparison
    original = number;

    // Reverse the number by extracting each digit
    while (number != 0) {
        lastDigit = number % 10;                // Get the last digit
        reversed = reversed * 10 + lastDigit;   // Build the reversed number
        number /= 10;                           // Drop the last digit
    }

    // Compare original and reversed numbers
    if (original == reversed) {
        printf("Yes, %d is indeed a palindrome!\n", original);
    } else {
        printf("No, %d is not a palindrome.\n", original);
    }

    return 0;
}
