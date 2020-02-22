#include<iostream>

using namespace std;

int main()
{
    int i,n,a=10,b=6;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a+=3;

        b+=i;
        cout<<b<<" ";
    }
    cout<<endl;


    return 0;
}
