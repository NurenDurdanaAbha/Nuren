#include<iostream>

using namespace std;

int main()
{
    long int n,k,bill[100000],b,sum=0,i;

    cin>>n>>k;

    for(i=0; i<n; i++)
        cin>>bill[i];

    cin>>b;

    for(i=0; i<n; i++)
    {
        if(i==k)
          bill[i]=0;

        sum = sum + bill[i];
    }

    if(sum/2==b)
        cout<<"Bon Appetit"<<endl;
    else
        cout<< b - (sum/2) <<endl;

    return 0;
}
