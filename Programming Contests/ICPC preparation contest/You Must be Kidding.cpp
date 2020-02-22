#include<bits/stdc++.h>

using namespace std;

factorial(long long int n)
{
    if(n>8 && n<13)
        return n*factorial(n-1);
    else
        return 40320;
}

int main()
{
    long long int n;

    while(cin>>n)
    {
        if((n<=7 && n>=0) || (n<0 && n%2==0))
            cout<<"Underflow!"<<endl;
        else if(n>=14 || (n<0 && n%2!=0))
            cout<<"Overflow!"<<endl;
        else
        {
            if(n==13)
                cout<<6227020800<<endl;
            else
                cout<<factorial(n)<<endl;
        }
    }



    return 0;
}
