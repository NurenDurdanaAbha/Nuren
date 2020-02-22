#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int L,R,a[10001];
    int test,t,x,i,j,count=0;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>L>>R;

        for(i=L; i<=R; i++)
        {
            x=0;
            int count=0;
            for(j=1; j<=R; j+=2)
            {
                if(i%j==0)
                {
                    a[x++]= j;
                }
            }
            cout<<"x: "<<x<<endl;
                if(x==1)
                    count++;

            for(int p=0; p<x; p++)
            {
                printf("%lld ",a[p]);
                cout<<endl;
            }
        }
        if(x==1)
                printf("Case %d: %d\n",t,count);
            else
                printf("Case %d: %d\n",t,0);


    }




    return 0;
}
