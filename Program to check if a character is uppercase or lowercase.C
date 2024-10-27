#include <stdio.h>

int main() {
    char inputChar;

    // Ask the user to enter a single character
    printf("Go ahead, enter a single character: ");
    scanf("%c", &inputChar);

    // Determine if the character is uppercase, lowercase, or something else
    if (inputChar >= 'A' && inputChar <= 'Z') {
        printf("Looks like '%c' is an uppercase letter.\n", inputChar);
    } else if (inputChar >= 'a' && inputChar <= 'z') {
        printf("Ah, '%c' is a lowercase letter!\n", inputChar);
    } else {
        printf("Interesting, '%c' isn’t a letter at all.\n", inputChar);
    }

    return 0;
}
