#include<iostream>

using namespace std;

int main()
{
    int n,a[50],b[50],i,count,t,j;

    cin>>t;
    for(j=1; j<=t;j++)
    {
        count=0;
        cin>>n;
        for(i=1; i<=n; i++)
           cin>>a[i];

        for(i=1; i<=n; i++)
           cin>>b[i];

        for(i=1; i<=n; i++)
        {
           if(a[i]==1 && b[i]>=18)
            count++;
        }

        cout<<"Family "<<j<<": "<<count<<endl;
    }

    return 0;
}
