#include<iostream>

using namespace std;

int main()
{
    int a,b,sum;

    while(cin>>a>>b)
    {
        sum=0;
        b*=-1;
        sum=a-b;
        cout<<sum<<endl;
    }


    return 0;
}
