#include<iostream>

using namespace std;

int main()
{
    int i,max,a[1001],loc=0;

    for(i=1; i<=100; i++)
    {
        cin>>a[i];
    }

    max=a[1];

    for(i=1; i<=100; i++)
    {
        if(max<a[i])
        {
           max=a[i];
           loc=i;
        }
    }

    cout<<max<<endl<<loc<<endl;


    return 0;
}
