#include<iostream>

using namespace std;

int main()
{
    int x,y,z,t,a,b;

    cin>>t;

    while(t--)
    {
        cin>>x>>y>>z;

        a=z-x;
        if(a<0)
            a = a*(-1);

        b=z-y;
        if(b<0)
            b = b*(-1);

        if(a<b)
            cout<<"Cat A"<<endl;
        else if(a>b)
            cout<<"Cat B"<<endl;
        else
            cout<<"Mouse C"<<endl;
    }


    return 0;
}
