#include <stdio.h>

int main() {
    double base;
    int exponent;
    double result = 1.0;

    // Prompt the user to enter the base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent (integer): ");
    scanf("%d", &exponent);

    // Calculate the power
    for (int i = 0; i < exponent; i++) {
        result *= base; // Multiply result by base
    }

    // Handle negative exponents
    if (exponent < 0) {
        result = 1.0 / result; // Calculate the reciprocal
    }

    // Display the result
    printf("%.2lf raised to the power of %d is: %.4lf\n", base, exponent, result);

    return 0;
}
