#include<stdio.h>
#include<math.h>

int main()
{
    long int n;
    double r,s;

    while(scanf("%lf%ld",&r,&n)!=EOF)
    {

        s = 0.5*n* r* r* (sin(2.0*3.141592653589793238462643383279/n));

        printf("%.3lf\n",s);
    }

    return 0;
}
