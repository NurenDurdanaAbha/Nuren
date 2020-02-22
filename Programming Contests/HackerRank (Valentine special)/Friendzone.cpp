#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,flag,i;

    while(scanf("%d",&n)!=EOF)
    {
        flag=0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            cout<<"Oh love!"<<endl;
        else
            cout<<"Friendzoned!"<<endl;
    }


    return 0;
}
