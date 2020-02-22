#include<iostream>

using namespace std;

long long int bigMod(long long int b,long long int p,long long int m)
{
    if(p==0)
        return 1%m;

        long long int a=bigMod(b,p/2,m);
        a = (a*a)%m;

        if(p%2!=0)
            a = (a*b)%m;

        return a;
}



int main()
{
    long long int b,p,m;

    while(cin>>b>>p>>m)
    {
       cout<<bigMod(b,p,m)<<endl;
    }



    return 0;
}
