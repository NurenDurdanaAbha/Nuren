#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,b,a,test,t;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>l>>b;
        a=__gcd(l,b);

        cout<<l/a * b/a<<endl;
    }

    return 0;
}
