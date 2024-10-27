#include <stdio.h>

int main() {
    double baseValue;
    int expValue;
    double powerResult = 1.0;

    // Get the base and exponent from the user
    printf("Please enter the base value: ");
    scanf("%lf", &baseValue);
    printf("Now enter the exponent (whole number): ");
    scanf("%d", &expValue);

    // Calculate the power by repeated multiplication
    for (int step = 0; step < (expValue < 0 ? -expValue : expValue); step++) {
        powerResult *= baseValue; // Multiply the result by base each time
    }

    // If exponent is negative, take the reciprocal to get the final result
    if (expValue < 0) {
        powerResult = 1.0 / powerResult; // Flip the result for negative exponents
    }

    // Show the final result with a clean message
    printf("%.2lf raised to the power of %d is approximately: %.4lf\n", baseValue, expValue, powerResult);

    return 0;
}
