#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int m,e,i=1,j;
    double bv,bw,d,ev,ew,eh,x,v,temp,temp_1,temp_2,temp_3,a,s;
    cin>>m;
    while(m--)
    {
        j=1;
        cout<<"Mission "<<i<<": "<<endl;
        cin>>e>>bv>>bw;
        while(e--)
        {
         cin>>d>>ev>>ew>>eh;
         cout<<"Enemy "<<j<<": ";
         temp=d*ev;
         temp_1=bv+ev;
         x=temp/temp_1;
         a=(0-ev)/2;
         s=(ev*2)+(0.5*a*4);
         x=x+s;

         temp=bv*(bw/1000);
         temp_1=ev*ew;
         temp_2=temp+temp_1;
         temp_3=(bw/1000)+ew;
         v=temp_2/temp_3;
         printf("Distance: %.2lf",x);
         printf(" m and Combined velocity: %.2lf",v);
         printf("\n");
         j++;
        }
        i++;
    }
    return 0;
}
