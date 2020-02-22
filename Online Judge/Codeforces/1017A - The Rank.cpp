#include<iostream>

using namespace std;

int main()
{
    int s[10001],n,x,sum=0,i,j,max,pos=1;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=4; j++)
        {
            cin>>x;
            sum+=x;
        }
        s[i]=sum;
        sum=0;
    }

//    for(i=1; i<=n; i++)
//        cout<<s[i]<<" ";

    max=s[1];
    for(i=1; i<=n; i++)
    {
        if(max<s[i])
            pos++;
    }

    cout<<pos<<endl;


    return 0;
}
