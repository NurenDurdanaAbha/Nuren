#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n,k;

    cin>>n>>k;
    for(int i=1; i<=k; i++)
    {
       if(n%10!=0)
           n--;
       else
           n/=10;
    }

    cout<<n<<endl;


    return 0;
}
