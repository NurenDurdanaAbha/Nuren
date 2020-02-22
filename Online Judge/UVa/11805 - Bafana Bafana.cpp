#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);

    int test,t,n,k,p,a,b;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>n>>k>>p;

        if(n<p)
        {
            while(n<p)
                p=p-n;
        }

      //  cout<<"p: "<<p<<endl;

        a=k+p;
        b=a-n;

        if(a>n)
            cout<<"Case "<<t<<": "<<b<<endl;
        else
            cout<<"Case "<<t<<": "<<a<<endl;

    }

    //system("notepad output.txt");

    return 0;
}
