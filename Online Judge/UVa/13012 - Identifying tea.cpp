#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int A,B,C,D,E,n,count;

    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        cin>>A>>B>>C>>D>>E;

        if(n==A)
            count++;
        if(n==B)
            count++;
        if(n==C)
            count++;
        if(n==D)
            count++;
        if(n==E)
            count++;

        cout<<count<<endl;
    }

    return 0;
}
