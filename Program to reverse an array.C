#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0;            // Starting index
    int end = n - 1;         // Ending index
    int temp;                // Temporary variable for swapping

    // Swap elements from start to end
    while (start < end) {
        // Swap arr[start] and arr[end]
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n]; // Declare the array

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Reverse the array
    reverseArray(array, n);

    // Display the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
