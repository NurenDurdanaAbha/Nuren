#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,s,n,k=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(s=1; s<=n-i; s++)
        {
            cout<<"  ";
        }

        for(j=1; j<=(2*i)-1; j++)
        {
            if(j%2==0)
                cout<<" "<<k<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
        k++;
    }

    for(i=n-1; i>=1; i--)
    {
        for(s=1; s<=n-i; s++)
        {
            cout<<"  ";
        }

        for(j=1; j<=(2*i)-1; j++)
        {
            if(j%2==0)
                cout<<" "<<k<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
        k++;

    }


    return 0;
}
