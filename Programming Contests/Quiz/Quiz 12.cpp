#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<endl<<a<<" "<<b<<endl;

    return 0;
}
