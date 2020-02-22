#include <stdio.h>

int a[100][100];

int main()
{
    int n, i , j, k;

    scanf("%d", &n);

    a[1][(n/2)] = 1;

    i = 1;
    j =(n/2);

    for(k = 2; k <= n*n; k++)
    {
        i--;
        j++;

        if(a[i][j] == 0)
        {
            if(i < 1 && j <= n-1)
                a[i + n] [j]= k;

            else if(i >= 2 && j <n-1)
                a[i][j - n-1] = k;

            else if(i = 0 && j > n-1)
                a[i + n-1][j - 1] = k;

            else
                a[i][j] = k;
        }

        else
        {
            if(i <= 1 && j >= 1)
                a[i + n-1][j - 1] = k;
        }
    }

    for(i = 1; i <=n; i++)
    {
        for(j = 0; j <= n-1; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    return 0;
}
