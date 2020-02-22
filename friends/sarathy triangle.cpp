#include <stdio.h>
int main()
{
    int n, k, i, j;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==n||j==1||j==i)
                printf("*");
            else
                printf(" ");
        }
        for(j=(n/2)+1;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==n||j==1||j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
