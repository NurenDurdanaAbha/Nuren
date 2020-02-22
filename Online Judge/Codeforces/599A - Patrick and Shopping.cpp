#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d1,d2,d3,d[5],max,i;

    cin>>d1>>d2>>d3;

    d[1]=2*(d1+d2);
    d[2]=2*(d1+d3);
    d[3]=2*(d2+d3);
    d[4]=d1+d3+d2;

    max=d[1];

    for(i=1; i<=4; i++)
    {
        if(max>d[i])
            max=d[i];
    }

    cout<<max<<endl;


    return 0;
}
