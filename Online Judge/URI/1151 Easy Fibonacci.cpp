#include<iostream>

using namespace std;

int main()
{
    int f[1000],i,n;

    cin>>n;
    f[1]=0;
    f[2]=1;

    for(i=3; i<=n; i++)
        f[i]=f[i-1]+f[i-2];

    for(i=1; i<=n; i++)
    {
      cout<<f[i];

      if(i!=n)
            cout<<" ";
    }

    cout<<endl;



    return 0;
}
