#include<stdio.h>

int main()
{
    int a[100][100],b[100][100], gun[100][100]={0},r,c,m,n,p,k;

    scanf("%d%d%d",&m,&n,&p);

    for(r=0; r<m; r++)
    {
        for(c=0; c<n; c++)
        scanf("%d",&a[r][c]);
    }

    for(r=0; r<p; r++)
    {
        for(c=0; c<m; c++)
            scanf("%d",&b[r][c]);
    }

    for(r=0; r<p; r++) //2

    {
        for(c=0; c<n; c++)  //2
        {
            for(k=0; k<m ;k++)  //3
                  gun[r][c]= gun[r][c] + ( a[r][k] * b [k][c]);
        }
    }

    for(r=0; r<n; r++)
    {
        for(c=0; c<p; c++)
        {
            printf("%d ",gun[r][c]);
        }
        printf("\n");
    }


    return 0;
}
