#include<iostream>

using namespace std;

int main()
{
    int n,test,t,count1=0,count2=0;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>n;

        if(n>=10 && n<=20)
            count1++;
        else
            count2++;
    }
    cout<<count1<<" in"<<endl<<count2<<" out"<<endl;


    return 0;
}
