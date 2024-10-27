#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    // Handle cases where d is greater than n
    d = d % n; // Normalize d to avoid unnecessary rotations

    // Temporary array to store the rotated version
    int temp[d];

    // Store the last d elements in the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the rest of the array
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    // Copy the temporary array back to the beginning of arr
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n]; // Declare the array

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Prompt the user to enter the number of positions to rotate
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &d);

    // Rotate the array
    rotateArray(array, n, d);

    // Display the rotated array
    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
