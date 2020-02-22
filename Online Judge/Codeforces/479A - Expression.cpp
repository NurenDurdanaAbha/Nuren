#include<iostream>

using namespace std;

int main()
{
    int arr[10001],i=1,n,a,b,c,max;

    cin>>a>>b>>c;

    arr[i++]=a+b+c;
    arr[i++]=a*b*c;
    arr[i++]=a*(b+c);
    arr[i++]=a+(b*c);
    arr[i++]=(a*b)+c;
    arr[i++]=(a+b)*c;

    n=i;

    max=arr[1];

    for(i=1; i<+n; i++)
    {
        if(max<arr[i])
            max=arr[i];
    }

    cout<<max<<endl;


    return 0;
}
