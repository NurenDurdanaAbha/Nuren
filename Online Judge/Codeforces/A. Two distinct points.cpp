#include<iostream>

using namespace std;

int main()
{
    long long int n,i,l1,l2,r1,r2,a,b;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l1>>r1>>l2>>r2;

        a=0;
        b=0;

        if(l1==l2 && r1==r2)
        {
            a=r1;
            b=l1;
        }
        else if(l1==l2)
        {
            if(r1>r2)
            {
                a=r2;
                b=l1;
            }
            else
            {
                a=l1;
                b=r1;
            }
        }
        else if(l1>l2)
        {

            if(r1<=r2)
            {
                a=l1;
                b=r1;
            }
            else
            {
                a=r2;
                b=l1;
            }

        }
        else
        {
            if(r1==r2)
            {
                a=l2+1;
                b=r2;
            }
            else if(r1>r2)
            {
                a=l2;
                b=r2;
            }
            else
            {
                a=r1-1;
                b=r2-1;
            }
        }

        cout<<a<<" "<<b<<endl;
    }



    return 0;
}
