#include<stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("%d ",fib(i));
    }

    return 0;
}
