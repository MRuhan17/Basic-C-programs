#include <stdio.h>

int main() {
    int n1, n2;

    // Prompt the user to enter the sizes of the arrays
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("Both arrays must have at least one element.\n");
        return 1;
    }

    int array1[n1]; // Declare the first array
    int array2[n2]; // Declare the second array

    // Input the elements of the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    // Input the elements of the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    // Find and print the common elements
    printf("Common elements are: ");
    int foundCommon = 0; // Flag to check if common elements are found

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]); // Print the common element
                foundCommon = 1; // Set the flag
                break; // Exit the inner loop
            }
        }
    }

    if (!foundCommon) {
        printf("No common elements found.\n");
    } else {
        printf("\n"); // New line after listing common elements
    }

    return 0;
}
