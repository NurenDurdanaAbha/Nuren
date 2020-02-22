#include<stdio.h>

int fufu(int n)
{
    if(n<=100)
        return  fufu(fufu(n + 11));

    else if(n>=101)
        return  n-10;
}


int main()
{
    int n,a;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;

    a=fufu(n);

    printf("f91(%d) = %d\n",n,a);
    }

    return 0;
}
