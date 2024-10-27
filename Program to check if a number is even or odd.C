#include <stdio.h>

int main()
{
    int num1;

    /* Input two numbers from user */
    printf("Enter the number: ");
    scanf("%d", &num1);

    /* If num1 is maximum */
    if(num1%2==0)
    {
        printf("%d is even", num1);        
    }
    else {
        printf("%d is odd", num1);
    }
}
