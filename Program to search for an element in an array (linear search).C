#include <stdio.h>

int main() {
    int n, i, searchElement, found = 0;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n]; // Declare an array of size n

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Prompt the user to enter the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (array[i] == searchElement) {
            found = 1; // Element found
            break;      // Exit the loop
        }
    }

    // Display the result
    if (found) {
        printf("Element %d found at index %d.\n", searchElement, i);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
