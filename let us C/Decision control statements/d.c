#include <stdio.h>
int main()
{

    int days_dely;
    int a = 0.5, b = 1, c = 5;
    printf("Number of days of delay : ");
    scanf("%d", &days_dely);
    if (days_dely >= 1 && days_dely <= 5)
    {
        printf("fine = %d", (days_dely * a));
    }
    else if (days_dely >= 6 && days_dely <= 10)
    {
        printf("fine = %d", (days_dely * b));
    }else if (days_dely >10  && days_dely <= 30)
    {
        printf("fine = %d", (days_dely * c));
    }
    else{
        printf("YOUR MEMBERSHIP IS CANCELLED.");
    }
    

    return 0;
}