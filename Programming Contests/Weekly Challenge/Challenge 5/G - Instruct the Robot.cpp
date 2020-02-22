#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,i,p;
    string x1,x2,x[1000];

    cin>>test;
    while(test--)
    {
        cin>>n;
        p=0;
        i=0;
        for(i=1; i<=n; i++)
        {
           cin>>x1;

           if(x1=="LEFT")
           {
               x[i]= x1;
               p--;
           }
           else if(x1=="RIGHT")
           {
               x[i] = x1;
               p++;
           }
           else
           {
               int v;
               cin>>x2>>v;
               x[i]=x[v];

               if(x[v]=="LEFT")
                p--;
               else if(x[v]=="RIGHT")
                p++;
           }
        }
        cout<<p<<endl;
    }

    return 0;
}
