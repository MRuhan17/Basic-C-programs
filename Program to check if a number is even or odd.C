#include <stdio.h>

int main()
{
    int number;

    // Prompt the user to enter a number
    printf("Please enter a number to check if it’s even or odd: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("Looks like %d is an even number.\n", number);
    } else {
        printf("And %d is an odd number.\n", number);
    }

    return 0;
}
