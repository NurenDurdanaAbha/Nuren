#include<stdio.h>
#define pi 3.14159
int main()
{
    double a,r;

    while(scanf("%lf",&r))
    {
        if(r>=100)
            break;

    a= pi*r*r;
    printf("%.5lf",a);

    if(a>=100)
        break;
    }
    return 0;
}
