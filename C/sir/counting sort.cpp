#include<stdio.h>

int a[1000],b[1000];

int main()
{
    int i,j,k,x,n,max=0;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);

        if (max< x)
       max  = x;

        b[x]++;
    }

  for(x=1; x<=max; x++)
  {
      for(k=1; k<=b[x]; k++)
        printf("%d ",x);
  }


    return 0;
}
