#include<stdio.h>
int main()
{
    int c,r,n=4;

    for(r=1; r<=n; r++)
    {
        printf("\n");

        for(c=1; c<=r; c++)
            printf("%d",c);
    }
    return 0;
}
