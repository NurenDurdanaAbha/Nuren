#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,test,t,i,sum;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>a>>b;

        sum=0;
        for(i=a; i<=b; i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        printf("Case %d: %d\n",t,sum);
    }


    return 0;
}
