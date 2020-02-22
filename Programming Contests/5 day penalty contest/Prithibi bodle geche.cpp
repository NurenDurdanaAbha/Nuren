#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,test,t,i,a[10000],p,v;
    char ch;

    cin>>n>>test;

    for(i=1; i<=n; i++)
        cin>>a[i];

    for(t=1; t<=test; t++)
    {
        getchar();
        scanf("%c",&ch);

        cin>>p>>v;

        if(ch=='R')
        {
            a[p]=v;
        }
        else if(ch=='A')
        {
           a[p]+=v;
        }
        else if(ch=='S')
        {
            a[p]-=v;
        }
    }

    for(i=1; i<=n; i++)
        cout<<a[i]<<endl;


    return 0;
}
