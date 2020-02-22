#include<iostream>

using namespace std;

int main()
{
    int n,i,a,b;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        a=i*i;
        b=i*i*i;

        cout<<i<<" "<<a<<" "<<b<<endl;
        cout<<i<<" "<<a+1<<" "<<b+1<<endl;
    }

    return 0;
}
