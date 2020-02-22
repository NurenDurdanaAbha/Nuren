#include<stdio.h>

int main()
{
    int l,t,i;
    double w,area,r,a,b;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
    scanf("%d",&l);

    w = (l*3.0)/5.0;
    area = l*w;
    r = l/5.0;

    a = 3.1415926535 * r * r;
    b = area - a;

    printf("%.2lf %.2lf\n",a,b);
    }

    return 0;
}
