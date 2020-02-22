#include<iostream>

using namespace std;

int main()
{
    long long int s,t,a,b,apple[100000],orange[100000],m,n,i;

    cin>>s>>t>>a>>b>>m>>n;

    for(i=0; i<m; i++)
        cin>>apple[i];

    for(i=0; i<n; i++)
        cin>>orange[i];

    for(i=0; i<m; i++)
        apple[i]=apple[i]+a;

    for(i=0; i<n; i++)
        orange[i]=orange[i]+b;


    int count=0;
    for(i=0; i<m; i++)
    {
        if(apple[i]>=s && apple[i]<=t)
            count++;
    }

    int countt=0;
    for(i=0; i<n; i++)
    {
        if(orange[i]>=s && orange[i]<=t)
            countt++;
    }

    cout<<count<<endl<<countt<<endl;

    return 0;
}
