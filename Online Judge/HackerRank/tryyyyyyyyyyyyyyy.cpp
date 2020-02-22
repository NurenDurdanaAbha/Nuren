#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int T,l,b,n,i,c,a1;
    float a;
    cin>>T;
    while(T--)
    {
        cin>>l>>b;
        n=l*b;
        for(i=1;(i*i)<=n;i++)
        {
           a=(float)n/(float)(i*i);
           a1=n/(i*i);
           if(a==a1)
            c=a;
        }
        cout<<c<<endl;

    }
    return 0;
}
