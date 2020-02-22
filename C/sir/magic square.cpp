#include<stdio.h>

int main()
{
    int i,j,n,a[100][100],k;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            a[i][j]=0;
        }
    }

    a[2][(n/2)+1] = 1;
    k=2;

    for(i-=1)
    {
        for(j+=1)
            {
                if(i<2 && j<=3)
                    a[i+3][j] = k++;

                if(i<2 && j>3)
                    a[i+2][j-1] = k++;

                if(i>=2 && j<3)
                    a[i][j-3] = k++;

                if(a[i][j]!=0)
                    a[i+1][j]=k++;
            }
    }

    for(i=2; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
