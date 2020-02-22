#include<iostream>

using namespace std;

int main()
{
    int n,i,count=0;

    cin>>n;

    i=n;
    do
    {
        if(i%2!=0)
        {
           cout<<i<<endl;
           count++;
        }

        i++;

    }while(count!=6);


    return 0;
}
