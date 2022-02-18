#include <stdio.h>
int main()
{

    int n,m=0,p=5;
    printf("Enter the no. of lines in the sereis : ");
    scanf("%d", &n);
    // printf("Enter the no. of times in the sereis horizontally : ");
    // scanf("%d", &m);


    int t[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for (int i = 0; i < n; i++)
    {
        for (int k = m; k < p; k++)
        {
            printf("%d ",t[k]);
        }

        m=m+1; 
        p=p+1;
        
        printf("\n");
    }
    
    return 0;
}



/*      12345
        23456   
        34567   
        45678   
        56789*/