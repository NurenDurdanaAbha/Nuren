#include<iostream>

using namespace std;

int main()
{
    long int a[100000],n,max,i,m=0;

    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    max=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }


    for(i=0; i<n; i++)
    {
        if(a[i]==max)
            m++;
    }

    cout<<m<<endl;


    return 0;
}
