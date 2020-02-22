#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,arr[10],i;

    cin>>a>>b>>c>>d;

    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;

    sort(arr,arr+4);

    a=arr[3]-arr[0];
    b=arr[3]-arr[1];
    c=arr[3]-arr[2];

    cout<<a<<" "<<b<<" "<<c<<endl;


    return 0;
}
