#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    if(d==0)
    {
        x=-c/b;
        printf("just one root = %d\n",x);
        return 0;
    }
    if(d>0)
        {
            printf("x1=%.3f\nx2=%.3f",x1,x2);
        }
        else
        {
            printf("Roots are imaginary");
        }
        return 0;
}
