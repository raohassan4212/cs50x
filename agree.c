#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char check = NULL;
    printf("Agree: y/n ");
    scanf("%c", &check);

    if ( tolower(check)  == 'y')
    {
        printf("Agree");
    }
    else
    {
        printf("Not Agree");
    }
}