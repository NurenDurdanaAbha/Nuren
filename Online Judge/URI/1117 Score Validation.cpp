#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    float x,avg,sum=0.0,count=0;

    while(1)
    {
        if(count==2)
            break;

        cin>>x;
        if(x>=0 && x<=10)
        {
            count++;
            sum+=x;
        }
        else
            cout<<"nota invalida"<<endl;
    }

    printf("media = %.2lf\n",sum/2.0);
    return 0;
}
