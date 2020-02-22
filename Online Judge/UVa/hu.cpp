#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s,s1,s3,ans,i=1;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        s=a-b;
       // cout<<"s="<<s<<endl;
        s1=s/b;
        //cout<<s1<<endl;
        s3=s%b;
        if(s3>0)
            s1=s1+1;
            if(s1>26)
                cout<<"Case "<<i<<": impossible"<<endl;
            else
        cout<<"Case "<<i<<": "<<s1<<endl;
        i++;
    }
    return 0;
}
