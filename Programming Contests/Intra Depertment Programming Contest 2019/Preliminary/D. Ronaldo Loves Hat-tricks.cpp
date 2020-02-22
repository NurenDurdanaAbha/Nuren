#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long int test,t,n,i,count,m;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>n;

        m=sqrt(n);

        count=2;
        if(m*m==n)
        {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
                count++;
            if(count>4)
                break;
        }
        if(count==3)
            cout<<"Ronaldo loves "<<n<<endl;
        else
            cout<<"Ronaldo does not love "<<n<<endl;
        }
        else
        {
            cout<<"Ronaldo does not love "<<n<<endl;
        }

    }


    return 0;
}
