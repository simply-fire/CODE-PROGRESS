#include <stdio.h>
int main()
{

    int n, p = 1;
    printf("Enter the no. of lines in the sereis : ");
    scanf("%d", &n);

    int t[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (int i = 0; i < n; i++)
    {
        if (i  <= 4)
        {
            for (int k = 0; k < (i + 1); k++)
            {
                printf("%d ", t[k]);
            }
        }
        else if (i > 4)
        {
            for (int k = 0; k < (i - p); k++)
            {
                printf("%d ", t[k]);
            }
            p = p + 2;
        }

        printf("\n");
    }

    return 0;
}

/*
1
12
123
1234
12345
1234
123
12
1




*/