#include<iostream>

using namespace std;

int main()
{
    int i,n,p,count=0,countt=0;

    cin>>n;
    cin>>p;

    for(i=1; i<=n; i+=2)
    {
        if(p<=i)
            count++;
        else
            countt++;
    }

    if(count<=countt)
        cout<<count-1<<endl;
    else
        cout<<countt<<endl;


    return 0;
}
