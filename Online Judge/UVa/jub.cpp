#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=1;
    while(scanf("%d",&n)==1)
    {
        //double u=0.0,v=0.0,t=0.0,s=0.0,a=0.0;
        if(n==0)
            break;
        else if(n==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            printf("Case %d: %.3lf %.3lf\n",k++,((u+v)/t)*2,(v-u)/t);
        }
        else if(n==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            printf("Case %d: %.3lf %.3lf\n",k++,(v*v - u*u)/(2*a),(v-u)/a);
        }
        else if(n==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            printf("Case %d: %.3lf %.3lf\n",k++,sqrt(u*u+2*a*s),(sqrt(u*u+2*a*s)-u)/a);
        }
        else if(n==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            printf("Case %d: %.3lf %.3lf\n",k++,sqrt(v*v-2*a*s),(v-sqrt(v*v-2*a*s))/a);
        }
    }

    return 0;
}
