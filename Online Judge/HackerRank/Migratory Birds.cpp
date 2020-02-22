#include<iostream>

using namespace std;

int main()
{
    int n,i,a[200000],x,max=0,maxx=0,p;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>x;

        if (max< x)
       max  = x;

        a[x]++;
    }

    maxx=a[1];

    for(x=1; x<=max; x++)
  {
     // for(k=1; k<=a[x]; k++)
      //  printf("%d ",x);

        if(maxx<a[x])
        {
            maxx=a[x];
            p=x;
        }
  }

    cout<<p<<endl;

    return 0;
}
