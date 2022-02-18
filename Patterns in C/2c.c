#include<stdio.h>
int main(){

    int n;
    printf("Enter number of lines in sereis you want to print : ");
    scanf("%d",&n);

    int Z[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for (int i = n; i >=0; i--)             // sets number of lines
    {
        for (int k = 0; k < i  ; k++)
        {
            printf("%d",Z[k]);
        }
        printf("\n");
    }
    
    return 0;
}