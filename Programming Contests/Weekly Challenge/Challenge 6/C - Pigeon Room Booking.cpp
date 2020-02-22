#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,n,i,a[1000],c,f=0;

    cin>>r>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

        sort(a,a+n);

    if(r==n)
        cout<<"too late"<<endl;
    else
        {
            c=1;
            for(i=0; i<n; i++)
            {
                if(c==a[i])
                    c++;
                else
                  f=1;
            }
        if(f==1)
            cout<<c<<endl;
        else
            cout<<c<<endl;
        }

    return 0;
}
