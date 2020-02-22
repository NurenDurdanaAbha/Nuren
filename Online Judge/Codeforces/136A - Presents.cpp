#include<iostream>

using namespace std;

int main()
{
    int a[1000],i,p,n;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p;
        a[p]=i;
    }

    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";

    cout<<endl;

    return 0;
}
