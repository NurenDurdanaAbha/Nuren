#include<iostream>

using namespace std;

int main()
{
    int i,n,a[100],sum=0;

    cin>>n;

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
        sum = sum + a[i];

    cout<<sum<<endl;

    return 0;
}
