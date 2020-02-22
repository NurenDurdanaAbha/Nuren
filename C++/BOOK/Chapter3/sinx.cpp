#include<iostream>
#include<math.h>

using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    long int i,n;
    double sinx=0.0,x=30.0;

    cin>>n;`        `1

    x=(3.1416/180)*x;

    for(i=1; i<=n; i+=2)
    {
        sinx = sinx + (pow(-1,i+1)*pow(x,i))/fact(i);
    }

    cout<<"sinx: "<<sinx<<endl;


    return 0;
}
