#include<iostream>

using namespace std;

int main()
{
    int i,count=0;
    double n;

    for(i=1; i<=6; i++)
    {
        cin>>n;

        if(n<0.0)
            count++;
    }
    cout<<count<<" valores positivos"<<endl;

    return 0;

}
