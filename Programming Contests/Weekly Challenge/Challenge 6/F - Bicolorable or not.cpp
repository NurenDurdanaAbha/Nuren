#include<iostream>
using namespace std;

int main()
{
    int r,n,i,a[110],x = 10,flag = 2;

    cin>>r>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(n == r)
            break;
        if(x == a[i])
        {
            x++;
            i = 0;
        }
    }
    if(n == r)
    {
        cout<<"too late"<<endl;
    }
    else
    {
        cout<<x<<endl;
    }

    return 0;
}
