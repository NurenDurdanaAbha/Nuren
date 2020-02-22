#include<stdio.h>

int a[1000], Qfront = 1, Qrear = 0;

void push(int p)
{
    Qrear++;
    a[Qrear] = p;j
}

int front()
{
    return  a[Qfront];
}

void pop()
{
    Qfront++;
}


int main()
{
    int i,n,myn;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&myn);
        push(myn);
    }

    for(i=1; i<=n; i++)
    {
        printf("%d ",front());
        pop();
    }

    return 0;
}
