#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    double b;

    cin>>l>>n;

    if(n==1)
    {
       b=ceil(l/120.0);

       if(b==1)
            cout<<"AWM needs "<<b<<" bullet"<<endl;
       else
            cout<<"AWM needs "<<b<<" bullets"<<endl;
    }
    else if(n==2)
    {
        b=ceil(l/79.0);

       if(b==1)
            cout<<"M24 needs "<<b<<" bullet"<<endl;
       else
            cout<<"M24 needs "<<b<<" bullets"<<endl;

    }
    else if(n==3)
    {
        b=ceil(l/75.0);

       if(b==1)
            cout<<"Kar98k needs "<<b<<" bullet"<<endl;
       else
            cout<<"Kar98k needs "<<b<<" bullets"<<endl;

    }
    else if(n==4)
    {
        b=ceil(l/66.0);

       if(b==1)
            cout<<"Win94 needs "<<b<<" bullet"<<endl;
       else
            cout<<"Win94 needs "<<b<<" bullets"<<endl;

    }
    else if(n==5)
    {
        b=ceil(l/61.0);

       if(b==1)
            cout<<"Mk14 needs "<<b<<" bullet"<<endl;
       else
            cout<<"Mk14 needs "<<b<<" bullets"<<endl;

    }


    return 0;
}
