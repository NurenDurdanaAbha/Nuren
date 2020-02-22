#include<iostream>

using namespace std;

int main()
{
    long long int i,a[100],s[100],sum=0,summ=0, x=0,y=0,z=0,max,min;

    for(i=0; i<5; i++)
        cin>>a[i];

    for(i=0; i<4; i++)
        summ = summ + a[i];

    s[0]=summ;
    max=s[0];

    for(i=1; i<5; i++)
        sum = sum + a[i];

    s[4]=sum;
    min=s[4];

    for(i=0; i<5; i++)
    {
        if(i==1)
            continue;
        else
            x = x + a[i];

    }
    s[3]=x;

    for(i=0; i<5; i++)
    {
        if(i==2)
            continue;
        else
            y = y + a[i];

    }
    s[2]=y;

    for(i=0; i<5; i++)
    {
        if(i==3)
            continue;
        else
            z = z + a[i];

    }
    s[1]=z;

    for(i=0; i<5; i++)
    {
        if(s[i]>max)
            max=s[i];

        if(s[i]<min)
            min=s[i];
    }


    cout<<min<<" "<<max<<endl;

    return 0;
}
