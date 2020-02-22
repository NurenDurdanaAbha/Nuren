#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char s1[20],s2[20];
    int k1,k2,test,t;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>s1>>k1;
        cin>>s2>>k2;

        printf("Case %d: %d\n",t,k1^k2);
    }


    return 0;
}
