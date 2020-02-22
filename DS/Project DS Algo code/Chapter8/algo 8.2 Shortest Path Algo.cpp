#include<stdio.h>

int min(int a, int b)
{
    if(a<=b)
        return a;
       // printf("a=%d\n",a);
    else
        return b;
}

int main()
{
    int W[10][10],Q[10][10],i,j,k,M;

    scanf("%d",&M);
    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            W[i][j]=0;
        }
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            scanf("%d",&W[i][j]);
        }
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%3d",W[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            if(W[i][j]==0)
                Q[i][j]=99999;
            else
                Q[i][j]=W[i][j];
        }
    }


    for(k=1; k<=M; k++)
    {
        for(i=1; i<=M; i++)
        {
            for(j=1;j<=M;j++)
                Q[i][j]=min(Q[i][j], Q[i][k]+Q[k][j]);
        }
        printf("\n");
    }


    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%6d",Q[i][j]);
        }
        printf("\n");
    }


    return 0;
}
