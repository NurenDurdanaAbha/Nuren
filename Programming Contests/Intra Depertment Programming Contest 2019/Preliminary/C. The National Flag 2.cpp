#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double w,area,r,a,b,l,x,y;

    scanf("%lf",&w);

    l=(5.0*w)/3.0;
  //  cout<<l<<endl;
    area=l*w;
    r=l/5.0;

    a=acos(-1)*r*r;
    b=area-a;

    x=(l*9.0)/20.0;
    y=w/2.0;

    printf("Co-ordinate of center of the red circle (x,y) = (%.1lf, %.1lf)\n",x,y);
    printf("Red circle area = %.4lf\n",a);
    printf("Bottle green area = %.4lf\n",b);


    return 0;
}
