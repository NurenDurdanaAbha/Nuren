#include<stdio.h>
int main()
{
    int c,r,t,amplitude,frequency,i,j,k;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
    scanf("%d",&amplitude);
    scanf("%d",&frequency);
    for(j=1; j<=frequency; j++)
    {
    for(r=1; r<=amplitude; r++)
    {
        for(c=1; c<=r; c++)
            printf("%d",r);

             printf("\n");
    }

    for(r=amplitude-1; r>=1; r--)
    {
        for(c=1; c<=r; c++)
            printf("%d",r);

             printf("\n");
    }
    if(j<frequency)
        printf("\n");
    }
    if(i<t)
        printf("\n");
    }
    return 0;
}
