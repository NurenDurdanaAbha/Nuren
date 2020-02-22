#include<stdio.h>
int main()
{
    int c,r,n=4,s;

    for(r=1; r<=n; r++)
    {
        for(s=1; s<=n-r; s++)
{
            printf(" ");
}

        for(c=1; c<=r; c++)
{
            printf("%d",r);
}
       printf("\n");
    }
    return 0;
}
