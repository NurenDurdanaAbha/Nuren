#include<stdio.h>
#include<math.h>

int main()
{
    int test,t=1;
    double r,diff;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf",&r);

        diff = 4.0*r*r -  2*acos(0.0)*r*r;

        printf("Case %d: %.2lf\n",t++,diff);

    }

    return 0;
}
