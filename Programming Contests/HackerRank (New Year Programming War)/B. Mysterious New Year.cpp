#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n,i,sum;

    while(scanf("%lld",&n)!=EOF)
    {
        sum=0;
       for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    }

    return 0;
}
