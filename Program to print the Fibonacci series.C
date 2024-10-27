#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series: \n");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;  // The first two terms are 0 and 1
        } else {
            next = first + second;  // Calculate the next term
            first = second;         // Update first to the previous second
            second = next;          // Update second to the next term
        }
        printf("%llu ", next);      // Print the current term
    }
    
    printf("\n"); // New line after printing the series

    return 0;
}
