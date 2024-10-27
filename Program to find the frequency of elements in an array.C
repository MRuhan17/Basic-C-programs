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
    int frequency[n]; // Array to store the frequency of each element
    int visited[n]; // Array to keep track of visited elements

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        frequency[i] = 0; // Initialize frequency to 0
        visited[i] = 0; // Initialize visited to 0
    }

    // Calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) { // Check if the element is already counted
            frequency[i] = 1; // Start frequency count
            for (int j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    frequency[i]++; // Increment frequency
                    visited[j] = 1; // Mark as visited
                }
            }
        }
    }

    // Display the frequency of each element
    printf("Element Frequency\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) { // Print only if the element is not visited
            printf("%d       %d\n", array[i], frequency[i]);
        }
    }

    return 0;
}
