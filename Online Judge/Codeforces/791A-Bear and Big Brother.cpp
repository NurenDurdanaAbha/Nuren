#include<iostream>

using namespace std;

int main()
{
    int a,b,i,count=0,x,y;

    cin>>a>>b;

    for(i=1; ; i++)
    {
      a=a*3;
      b=b*2;

      if(a>b)
      {
          count=i;
          break;
      }
    }

    cout<<count<<endl;


    return 0;
}
