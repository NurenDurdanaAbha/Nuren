#include<iostream>

using namespace std;

int main()
{
    int t,n,k,a[1000],i;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        int count=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];

            if(a[i]<=0)
                count++;
        }


        if(k<=count)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }


    return 0;
}
