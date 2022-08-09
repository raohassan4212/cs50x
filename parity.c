#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("Enter your number: ");
    scanf("%i", &number);

    if (0 == number % 2)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}