#include<iostream>

using namespace std;

int main()
{
    long int f[10000],i,n,test,t;

    cin>>test;
    for(t=1; t<=test; t++)
    {
    cin>>n;

    f[0]=0;
    f[1]=2;

    for(i=2; i<=n; i++)
    {
        f[i]=4*f[i-1]+f[i-2];
    }

    cout<<f[n]<<endl;
    }

    return 0;
}
