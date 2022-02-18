#include <stdio.h>
int main()
{

    int Y;
    printf("Enter a year : ");
    scanf("%d", &Y);

    if (Y % 4 == 0 && Y % 100 != 0)
    {
        printf("the entered year is a leap year.");
    }

    else if (Y % 400 == 0)
    {
        printf("the entered year is a leap year.");
    }
    else
    {
        printf("the entered year is not a leap year.");
    }

    return 0;
}