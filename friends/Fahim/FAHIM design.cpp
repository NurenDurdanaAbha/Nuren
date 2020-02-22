#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,j,n;

    cin>>n;

    int p=2*n-1;

    for(i=1; i<=p; i++)
    {
        for(j=1; i<=p; j++)
        {
            if(i==1 || i==p)// || (i!=1 || i!=p && j==1 || j==p))
                cout<<n;
            else
                cout<<" ";

            if(i==n && j==n)
                cout<<1;
        }
        cout<<endl;
    }

    return 0;
}
