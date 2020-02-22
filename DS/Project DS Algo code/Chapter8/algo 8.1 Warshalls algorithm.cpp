#include<stdio.h>

int AND(int a, int b)
{
    if(a==1 && b==1)
        return 1;
    else
        return 0;
}

int OR(int a, int b)
{
    if(a==0 && b==0)
        return 0;
    else
        return 1;
}

int main()
{
    int A[10][10],P[10][10],i,j,k,M;

    scanf("%d",&M);

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            A[i][j]=0;
        }
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            if(A[i][j]==0)
                P[i][j]=0;
            else
                P[i][j]=1;
        }
    }

    for(k=1; k<=M; k++)
    {
        for(i=1; i<=M; i++)
        {
            for(j=1;j<=M;j++)
                //P[i][j]=OR(AND(P[i][j],P[i][k]),P[k][j]);
                P[i][j]=OR(P[i][j],AND(P[i][k],P[k][j]));
        }
    }

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%6d",P[i][j]);
        }
        printf("\n");
    }


    return 0;
}
