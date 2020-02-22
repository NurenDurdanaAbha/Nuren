#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,a[100],b[100],m,i,j;

    cin>>m;
    for(i=1; i<=m; i++)
        cin>>b[i];

    sort(b,b+m);

    for(i=1; i<=m; i++)
        printf("%d ",b[i]);
    cout<<endl;

    return 0;
}
