#include<iostream>

using namespace std;

int main()
{
    int a,b,max,min,sub;

    cin>>a>>b;

    max=a;
    min=b;
    if(max<b)
    {
      max=b;
      min=a;
    }

    cout<<min<<" ";

    sub=max-min;

    cout<<sub/2<<endl;



    return 0;
}
