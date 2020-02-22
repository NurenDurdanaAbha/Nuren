#include<bits/stdc++.h>

using namespace std;

int main()
{
    float a1,a2,a3,a,b1,b2,b3,b,n;

    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;

    a=a1+a2+a3;
    b=b1+b2+b3;
   // cout<<a<<" "<<b<<endl;

    a=ceil(a/5);
    b=ceil(b/10);
   // cout<<a<<" "<<b<<endl;

    if((a+b)>n)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;


    return 0;
}
