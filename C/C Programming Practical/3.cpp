#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0)
    {
        x=-c/b;
        printf("Only one root: %.3lf\n",x);
        return 0;
    }
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("Roots are unreal, imaginary and complex.\n");
    }
    else if(d>0)
    {
        printf("Roots are real but not equal.\n");
        printf("R1 = %.3lf\nR2 = %.3lf\n",(-b+sqrt(d))/(2.0*a),(-b-sqrt(d))/(2.0*a));
    }
    else if(d==0)
    {
        printf("Roots are real but equal.\n");
        printf("R= %.3lf",-b/(2.0*a));
    }
    return 0;
}
