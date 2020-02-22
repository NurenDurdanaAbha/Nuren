#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,aa[100],n,a,b,c;

    cin>>n;
    cin>>a>>b>>c;

    aa[1]=a;
    aa[2]=b;
    aa[3]=c;

    for(i=4; i<=n; i++)
        aa[i]=aa[i-1]+aa[i-2]+aa[i-3];

        printf("%d ",aa[n]);


    return 0;
}
