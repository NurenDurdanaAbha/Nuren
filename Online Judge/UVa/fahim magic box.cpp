#include<stdio.h>

int main()
{
    int i,j,n,a[100][100],k;

    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            a[i][j]=0;
        }
    }

    a[1][(n/2)+1] = 1;
    //k=2;

   // for(i=1; i<=n; i+=1)
    //{
      //  for(j=2; j<=n; j+=1)
        //    {
        i = 1;
        j =(n/2)+1;
      for(k=2;k<=n*n;k++)
        {
            i--;
            j++;
                if(a[i][j]==0)
                {
                    if(i<1 && j<=n)
                    {
                        a[i+n][n] = k;
                        i = i+n;
                        j = n;
                    }
                    else if(i<1 && j>n)
                    {
                        a[i+1][j] = k;
                        i = i+1;
                        j = j;
                    }
                    else if(i>=1 && j<n)
                    {
                        a[i][j-n] = k;
                        i = i;
                        j = j-n;
                    }

                }
                else
                {
                    if(a[i-1][j+1]!=0)
                {
                    a[i+1][j]=k;
                    i = i+1;
                    j = j;
                }
                }


   }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
