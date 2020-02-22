#include<iostream>

using namespace std;

int main()
{
    int a[100001],i,item,n,loc;

    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    cin>>item;

    for(i=0; i<n; i++)
    {
        if(a[i]==item)
           loc=i;
    }

    cout<<loc<<endl;

    return 0;
}
