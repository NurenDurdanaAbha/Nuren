#include<iostream>

using namespace std;

int main()
{
    int n,i,a[100001],count=0;

    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];

    for(i=1; i<=n; i++)
    {
            if(a[i]!=a[i+1])
                count++;
    }

    cout<<count<<endl;


    return 0;
}
