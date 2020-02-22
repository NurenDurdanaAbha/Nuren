#include<stdio.h>

int main()
{
    int A[100][100],B[100][100],C[100][100],M,P,N;

    scanf("%d%d%d",&M,&P,&N);
    printf("\n");

    for(int i=1; i<=M; i++)
    {
        for(int j=1; j<=P; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     printf("\n");

    for(int i=1; i<=P; i++)
    {
        for(int j=1; j<=N; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
     printf("\n");

    for(int i=1; i<=M; i++)
    {
        for(int j=1; j<=N; j++)
        {
            C[i][j]=0;

            for(int k=1; k<=P; k++)
            {
                C[i][j]= C[i][j] + A[i][k]*B[k][j];
            }
        }
    }

     printf("\n");
    for(int i=1; i<=M; i++)
    {
        for(int j=1; j<=N; j++)
        {
            printf("%2d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
