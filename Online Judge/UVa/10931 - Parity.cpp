#include<stdio.h>
int main()
{
    double n,r,x,b;
    int i,count;

    while(scanf("%lf",&n)!=EOF)
    {
        if(n==0)
            break;

        i=1;
        b=0.0;
    while(n!=0)
    {
        r = n%2.0;
        n = n/2.0;
        b= b+ (r*i);
        i = i*10.0;
    }
    x=b;

    count=0;
    while(x!=0)
    {
        r=x%10.0;
        x=x/10.0;

        if(r==1)
            count++;
    }

    printf("The parity of %.0lfis %d (mod 2).\n",b,count);
    }

    return 0;
}
