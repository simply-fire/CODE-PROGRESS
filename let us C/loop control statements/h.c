#include <stdio.h>
int main()
{

    long I, r, count = 0, t[100];
    printf("Enter an Integer number : ");
    scanf("%ld", &I);

    while (1)
    {
        r = I % 8;
        I = I / 8;
        t[count] = r;
        count++;
        if (I == 0)
        {
            break;
        }
    }
    printf("%ld\n", count);
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%ld", t[i]);
    }

    return 0;
}