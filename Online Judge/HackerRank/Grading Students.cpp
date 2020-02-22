#include<iostream>

using namespace std;

int main()
{
    int n,a[1000],i;

    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        if(a[i]%5 == 3 && a[i]>=38)
        {
           cout<<a[i] + 2 <<endl;
        }
        else if(a[i]%5 == 4 && a[i]>=38)
        {
           cout<<a[i] + 1 <<endl;
        }
        else
            cout<<a[i]<<endl;
    }

    return 0;
}
