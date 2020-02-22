#include<stdio.h>

int main()
{
    int test,t=1;
    double r,diff;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf",&r);

        diff = 4.0*r*r - 3.14159265358979323846264338327950*r*r;

        printf("Case %d: %.2lf\n",t++,diff);

    }

    return 0;
}
