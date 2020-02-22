#include<stdio.h>
#include<math.h>

int main()
{
    double r,area,p,l;
    int t=1,test;

    scanf("%d",&test);
    while(t<=test)
    {
        scanf("%lf",&r);

        l=sqrt(2*r*r);
        p= 2*l + 2*(sqrt(4*r*r-l*l));
        printf("%.10lf\n",p);

        t++;
    }


    return 0;
}
