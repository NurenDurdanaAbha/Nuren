#include<bits/stdc++.h>

using namespace std;

double absl(double x, double y)
{
    double z = x-y;

    if(z<0)
        return -z;

    return z;
}

double mini(double x, double y)
{
    if(x>y)
        return y;
    return x;
}

int main()
{
    int t, n, low, high;
    bool outliners;
    double x[1001], avg, dA, dB, dL, dH;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        avg=0;
        outliners=false;

        scanf("%d %d %d", &n, &low, &high);

        for(int j=0; j<n; j++)
        {
            scanf("%lf", &x[j]);
            avg+=x[j];
        }
        avg=avg/(n*1.0);
        printf("Case %d:\n", i+1);
        for(int j=0; j<n; j++)
        {
            dA=absl(avg,x[j]);
            dL=absl(x[j],low);
            dH=absl(x[j],high);
            dB=mini(dL,dH);

            if(dB<dA)
            {
                printf("%.2lf\n", x[j]);
                outliners = true;
            }
        }

        if(!outliners)
        {
            printf("No outliners\n");
        }

    }

    return 0;
}
