#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;

    printf("Enter x: ");
    scanf("%i", &x);

    printf("Enter y: ");
    scanf("%i", &y);

    int z = x + y;

    printf("The sum of two number: %i",z);
}