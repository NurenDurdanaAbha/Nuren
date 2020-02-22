#include <bits/stdc++.h>

using namespace std;

int a[100],b[100];

int main()
{
    int i,sum;

    for(i=1; i<=4; i++)
    {
        cin>>a[i];

        sum = *max_element(a,a+100);
    }

    b[1]=sum-a[1];
    b[2]=sum-a[2];
    b[3]=sum-a[3];
    b[4]=sum-a[4];

    for(i=1; i<=4; i++)
    {
        if(b[i]!=0)
            cout<<b[i]<<" ";
    }

    cout<<endl;


    return 0;
}
