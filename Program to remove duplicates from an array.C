#include <stdio.h>

int main() {
    int n, i, j, k = 0;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n]; // Declare an array of size n
    int unique[n]; // Array to store unique elements

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        // Check if the current element is already in the unique array
        int isDuplicate = 0;
        for (j = 0; j < k; j++) {
            if (array[i] == unique[j]) {
                isDuplicate = 1; // Found a duplicate
                break;
            }
        }
        // If it's not a duplicate, add it to the unique array
        if (!isDuplicate) {
            unique[k] = array[i];
            k++; // Increment the count of unique elements
        }
    }

    // Display the result
    printf("Array after removing duplicates:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
