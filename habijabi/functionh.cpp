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
        printf("PRIME\n");
    }
    else
    {
         printf("not PRIME\n");
    }
}
    int main()
    {
        int n;
        scanf("%d",&n);
        isPrime(n);
        return 0;
    }
