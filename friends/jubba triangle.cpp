#include<stdio.h>
int main()
{
    int i,j,n,s;

    while(scanf("%d",&n)!=EOF)
    {
    for(i=1; i<=n; i++)
    {
        for(s=1; s<=n-i; s++)
            {
                printf("  ");
            }
        for(j=1; j<=i; j++)
        {
            if(j==1 && i==i || i==j  || i==n )
                printf(" *");
            else
                printf("  ");
        }

        printf("  ");

        for(j=1; j<=i; j++)
        {
            if(j==1 && i==i || i==j  || i==n )
                printf(" *");
            else
                printf("  ");
        }

        printf("\n");
    }
    }

    return 0;
}
