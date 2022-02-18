#include <stdio.h>
int main()
{

    int n, count = 0;
    printf("Enter no, of lines in the pattern : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (n - i); k++)
        {
            printf(" ");
        }
        count++;
        for (int l = 0; l < (count + i); l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} 