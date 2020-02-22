#include<iostream>

using namespace std;

int main()
{
    int a[10001],n,i,x,p,q,flag=0;

    cin>>n;
    for(i=1; i<=n; i++)
        a[i]=0;

    cin>>p;
    for(i=1; i<=p; i++)
    {
        cin>>x;
        a[x]++;
    }

    cin>>q;
    for(i=1; i<=q; i++)
    {
        cin>>x;
        a[x]++;
    }

    for(i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        cout<<"Oh, my keyboard!"<<endl;
    else
        cout<<"I become the guy."<<endl;



    return 0;
}
