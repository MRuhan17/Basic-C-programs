#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the absolute value
    if (num < 0) {
        num = -num;
    }

    // Display the result
    printf("The absolute value is: %d\n", num);

    return 0;
}
