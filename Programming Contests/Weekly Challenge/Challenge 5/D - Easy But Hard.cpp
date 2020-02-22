#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,sum;

    while(scanf("%d",&n)!=EOF)
       {
           sum=0;
        for(int i=1; i<=n; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl<<endl;
       }


    return 0;
}
