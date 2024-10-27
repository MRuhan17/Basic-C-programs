#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array must have at least one element.\n");
        return 1;
    }

    int array[n]; // Declare the array
    int evenSum = 0; // Initialize sum of even numbers
    int oddSum = 0;  // Initialize sum of odd numbers

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Calculate the sum of even and odd numbers
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            evenSum += array[i]; // Add to even sum
        } else {
            oddSum += array[i]; // Add to odd sum
        }
    }

    // Display the results
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
