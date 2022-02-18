#include <stdio.h>
int main()
{

    int n;
    printf("Enter the no. of lines in the sereis : ");
    scanf("%d", &n);

    int t[100]={1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <i+1; k++)
        {
            printf("%d",t[k]); // try to replace k by i and then understand the result shown by compiler
        }
        printf("\n");
    }
    
    return 0;
}