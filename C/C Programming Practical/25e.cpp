#include<stdio.h>
int main()
{
    int c,r,n=4,t=0;
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            t++;
            printf("%d",t);
        }
        printf("\n");
    }
    return 0;
}
