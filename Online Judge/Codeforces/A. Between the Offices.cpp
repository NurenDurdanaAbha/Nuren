#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a[6][6],i,j,x,y;

    for(i=1; i<=5; i++)
    {
       for(j=1; j<=5; j++)
       {
           cin>>a[i][j];

           if(a[i][j]==1)
           {
              x=i;
              y=j;
           }
       }
    }

    if(x==3)
    {
        cout<<abs(3-y)<<endl;
    }
    else
    {
        cout<<abs(3-x)+abs(3-y)<<endl;
    }


    return 0;
}
