#include <stdio.h>

int main() {
    int num, reversedNum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for later use
    int originalNum = num;

    // Reverse the number
    while (num != 0) {
        digit = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Shift and add the digit
        num /= 10;                 // Remove the last digit
    }

    // Display the result
    printf("The reverse of %d is: %d\n", originalNum, reversedNum);

    return 0;
}
