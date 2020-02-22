#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char a[3],b[3],flag=0;
    int i;

    cin>>a;

    for(i=1; i<=5; i++)
    {
        cin>>b;

        if(a[0]==b[0] || a[1]==b[1])
        {
           printf("YES\n");
           flag=1;
           break;
        }
    }

    if(flag==0)
        printf("N0\n");

    return 0;
}
