#include<stdio.h>
#include<math.h>

int main()
{
    int test,k=1;
    double  s,u,v,a,t,p,q;

    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)
            break;

        else if(test==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);

            a = (v-u)/t;
            s = u*t + .5*a*t*t;

            printf("Case %d: %.3lf %.3lf\n",k++,s,a);
        }

        else if(test==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);

            t = (v-u)/a;
            s = u*t + .5*a*t*t;

            printf("Case %d: %.3lf %.3lf\n",k++,s,t);
        }

        else if(test==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);

            p = u*u + 2*a*s;
            v = sqrt(p);
            t = (v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",k++,v,t);
        }
        else if(test==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);

            q = v*v - 2*a*s;
            u = sqrt(q);
            t = (v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",k++,u,t);
        }

    }

    return 0;
}
