#include<stdio.h>
int isPrime(int n)
{
    int  f=1, i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            f=2;
            break;
        }
    }
    if(f==1)
    {
        printf("%d  ",i);
    }
}
    int main()
    {
        int i,a,b;
         scanf("%d%d",&a,&b);
        for(i=a; i<=b; i++)
        isPrime(i);
        return 0;
    }
