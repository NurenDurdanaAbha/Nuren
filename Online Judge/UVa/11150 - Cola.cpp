#include<stdio.h>

int main()
{
    int n,a,b,total;

        while(scanf("%d",&n)!=EOF)
        {
        if(n==0)
            break;

    total = n;
        while(n >= 3)
        {
    a= n/3;
    b = n%3;

    total= total + a;

    n = a + b;
    }

    if(n==2)
      printf("%d\n",total + 1);
      else
        printf("%d\n",total);
    }



    return 0;
}
