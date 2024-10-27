#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt the user to enter the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
