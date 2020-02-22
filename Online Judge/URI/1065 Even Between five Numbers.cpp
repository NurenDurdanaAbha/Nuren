#include<iostream>

using namespace std;

int main()
{
    int i,x,count=0;

    for(i=1; i<=5; i++)
    {
        cin>>x;

        if(x%2==0)
            count++;
    }

    cout<<count<<" valores pares"<<endl;


    return 0;
}
