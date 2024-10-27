#include <stdio.h>
#include <limits.h>

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

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int smallest = INT_MAX; // Initialize smallest to the largest possible integer

    // Traverse the array to find the smallest element
    for (int i = 0; i < n; i++) {
        if (array[i] < smallest) {
            smallest = array[i]; // Update smallest
        }
    }

    // Display the smallest element
    printf("The smallest element is: %d\n", smallest);

    return 0;
}
