#include<stdio.h>
int main()
{
    int c,r,n=4;

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
            printf("%d",r);

             printf("\n");
    }
    return 0;
}
