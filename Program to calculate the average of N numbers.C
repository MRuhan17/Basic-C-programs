#include <stdio.h>

int main() {
    int count, index;
    float totalSum = 0.0, avgValue;

    // Ask user for the total numbers they want to work with
    printf("How many numbers will you enter? ");
    scanf("%d", &count);

    // Validate the user's input, ensuring it's positive
    if (count <= 0) {
        printf("Oops! We need a positive integer to proceed.\n");
        return 1; // Exit due to invalid input
    }

    // Loop through each entry to collect numbers and build up the sum
    for (index = 1; index <= count; index++) {
        float currentNumber;
        printf("Please provide number %d: ", index);
        scanf("%f", &currentNumber);
        totalSum += currentNumber; // Accumulate each input into the total sum
    }

    // Calculate the average based on collected data
    avgValue = totalSum / count;

    // Present the calculated average in a friendly format
    printf("The average of your numbers is: %.2f\n", avgValue);

    return 0;
}
