#include<iostream>

using namespace std;

int main()
{
    int t,test,i,sum,x,y,max,min;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>x>>y;

        max=x;
        min=y;
        if(max<y)
        {
          max=y;
          min=x;
        }

        sum=0;
        for(i=min+1; i<max; i++)
        {
          if(i%2!=0)
                sum+=i;
        }

        cout<<sum<<endl;
    }



    return 0;
}
