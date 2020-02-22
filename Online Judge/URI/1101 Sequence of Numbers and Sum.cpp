#include<iostream>

using namespace std;

int main()
{
    int m,n,i,max,min,sum;

    while(cin>>m>>n)
    {
        if(m<=0 || n<=0)
            break;

        max=m;
        min=n;
        if(max<n)
        {
           max=n;
           min=m;
        }

        sum=0;
        for(i=min; i<=max; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }

        cout<<"Sum="<<sum<<endl;
    }


    return 0;
}
