#include<iostream>

using namespace std;

int main()
{
    int n,h,x,i,count=0;

    cin>>n>>h;

    for(i=1; i<=n; i++)
    {
        cin>>x;

        if(x<=h)
            count+=1;
        else
            count+=2;
    }

    cout<<count<<endl;


    return 0;
}
