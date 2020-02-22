#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double c,d,f;
    int test,t;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>c>>d;
        f = ((9.0*c)/5.0)+32.0;

        printf("Case %d: %.2lf\n",t,(5.0/9.0)*((f+d)-32.0));
    }


    return 0;
}
