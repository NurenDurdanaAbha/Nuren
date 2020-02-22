#include<stdio.h>
int main()
{
    int a[100][100],i,j,n;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
    {
    if(i==j || j==n-i-1)
        a[i][j]=1;
    else
        a[i][j]= 0;

         printf("%d  ",a[i][j]);
    }
     printf("\n");
}
  // for(i=0; i<n; i++)
    {
       // for(j=0; j<n; j++)
        {
        //printf("%d  ",a[i][j]);
        }
        //printf("\n");
    }

    return 0;
}
