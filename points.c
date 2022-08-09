#include <stdio.h>

int main(void)
{
    const int MINE = 2;
    int points = 0;
    printf("Enter your points: ");
    scanf("%i", &points);

    if (points < MINE)
    {
        printf("Your point are less then mine");
    }
    else if (points > MINE)
    {
        printf("Your ponit ara more than mine");
    }
    else
    {
        printf("Your point are equal to mine");
    }
}