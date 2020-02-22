#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],sum[2][3],r,c;

    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
     for(r=0; r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            sum[r][c] = a[r][c] + a[r][c];
        }
    }
    printf("\n\n\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",sum[r][c]);
        }
         printf("\n");
    }
    return 0;
}
