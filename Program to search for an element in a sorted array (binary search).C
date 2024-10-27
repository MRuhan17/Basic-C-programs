#include <stdio.h>

int main() {
    int n, searchElement, left, right, mid;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int array[n]; // Declare an array of size n

    // Input the elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Prompt the user to enter the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Initialize left and right pointers for binary search
    left = 0;
    right = n - 1;
    int found = 0; // Flag to indicate if the element was found

    // Perform binary search
    while (left <= right) {
        mid = left + (right - left) / 2; // Calculate mid index

        // Check if the element is present at mid
        if (array[mid] == searchElement) {
            found = 1; // Element found
            break; // Exit the loop
        }
        // If the element is greater, ignore the left half
        else if (array[mid] < searchElement) {
            left = mid + 1;
        }
        // If the element is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Display the result
    if (found) {
        printf("Element %d found at index %d.\n", searchElement, mid);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
