#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int array[n]; // Declare the array

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int largest = INT_MIN;        // Initialize largest to the smallest possible integer
    int secondLargest = INT_MIN;  // Initialize second largest

    // Traverse the array to find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (array[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = array[i];      // Update largest
        } else if (array[i] > secondLargest && array[i] < largest) {
            secondLargest = array[i]; // Update second largest
        }
    }

    // Check if the second largest element was found
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
