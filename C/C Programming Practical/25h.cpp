#include<stdio.h>
int main()
{
    int c,r,n=4;
    char t=64;

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            t++;
            printf("%c",t);
        }
        printf("\n");
    }
    return 0;
}
