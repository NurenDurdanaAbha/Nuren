#include<iostream>

using namespace std;

int main()
{
    int a,n,i,sum=0;

    cin>>a;
    cin>>n;

    while(n<=0)
        cin>>n;

    for(i=1; i<=n; i++)
    {
        sum+=a;
        a++;
    }

    cout<<sum<<endl;


    return 0;
}
