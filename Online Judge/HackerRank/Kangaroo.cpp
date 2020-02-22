#include<iostream>

using namespace std;

int main()
{
    long int x1,x2,v1,v2,a,b,i;

    cin>>x1>>v1>>x2>>v2;

    i=1;
    while(i<=10000)
    {
        x1=x1+v1;
        x2=x2+v2;

        if(x1==x2)
        {
            cout<<"YES"<<endl;
            break;
        }

        i++;
    }

    if(i>10000)
        {
            cout<<"NO"<<endl;
        }



    return 0;
}
