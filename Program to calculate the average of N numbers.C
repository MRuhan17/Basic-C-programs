#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1; // Exit with an error code
    }

    // Loop to read N numbers and calculate the sum
    for (i = 1; i <= n; i++) {
        float number;
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number; // Add each number to the sum
    }

    // Calculate the average
    average = sum / n;

    // Display the result
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}
