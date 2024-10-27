#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        digit = num % 10;                // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Shift and add the digit
        num /= 10;                       // Remove the last digit
    }

    // Check if the original number and the reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
