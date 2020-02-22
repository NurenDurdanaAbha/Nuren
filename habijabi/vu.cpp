#include <stdio.h>

int main()
{
    int i,n,sum=0;
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
         if (i%5==0 && i%3==0)
         sum=sum+i;
    }
     printf("%d", sum);
    return 0;
}
