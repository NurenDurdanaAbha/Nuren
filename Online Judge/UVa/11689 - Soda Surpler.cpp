#include<iostream>

using namespace std;

int main()
{
    int e,f,c,test,t,a,d,r,sum;

    cin>>test;
    for(t=1; t<=test; t++)
    {
      cin>>e>>f>>c;
      a=e+f;

      sum=0;
      while(a>=c)
      {
          d=a/c;
          r=a%c;

          sum=sum+d;
          a=d+r;
      }

      cout<<sum<<endl;
    }


    return 0;
}
