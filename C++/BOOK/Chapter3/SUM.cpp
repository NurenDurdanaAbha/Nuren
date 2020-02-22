#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float i,n,SUM=0,k;

    cout<<"Enter the last number: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        k=pow(1/i,i);

        SUM = SUM + k;
    }

    cout<<"The SUM of the series is: "<<SUM<<endl;

    return 0;
}
