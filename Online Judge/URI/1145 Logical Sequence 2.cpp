#include<iostream>

using namespace std;

int main()
{
    int x,y,i,j,count=0;

    cin>>x>>y;

    for(i=1; i<=y; i++)
    {
        if(count<=x)
        {
            count++;
            cout<<i;
            if(count<x)
                cout<<" ";


            if(count==x)
            {
                count=0;
                cout<<endl;
            }
        }
    }



    return 0;
}
