#include<stdio.h>

int sum(int x, int y)
{
        int    z=x+y;
            //printf("%d\n",z);
          //  return z;
}


int main()
{
    int a,b,n=20,i,c;

    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        c=sum(a,b);
         printf("%d\n",c);
    }


    return 0;
}
