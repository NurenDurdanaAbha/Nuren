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
    long int i;
    double cosx=0.0,x=1.0;

    x=(3.1416/180)*x;

    for(i=1; i<=7; i+=2)
    {
        cosx = cosx + (pow(-1,i+1)*pow(x,i))/fact(i);
    }

    cout<<"cosx: "<<cosx<<endl;


    return 0;
}
