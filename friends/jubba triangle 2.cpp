#include<stdio.h>

int main()
{
    int  r, c, n,s;

    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {

            if(c==1 && r==r || r==c  || r==n)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
