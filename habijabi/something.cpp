#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        n=n%(pow(10,i));
    }
     printf("%d\n",n);

    return 0;
}
