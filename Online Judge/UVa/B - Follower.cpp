#include<stdio.h>

int main()
{
    int a,b,c,d,e,min;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==-1 && b==-1)
            break;

            if(b>a)
                c = b-a;
            else
                c = a-b;

            d = (99-a) + (99-b);

            if(a>b)
                e = (99-a) + b + 1;
            else
                e = a+1 + (99-b);

            min=c;
    if(min>d)
    min=d;

    if(min>e)
    min=e;

    printf("%d\n",min);
    }
    return 0;
}
