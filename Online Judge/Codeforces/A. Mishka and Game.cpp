#include<iostream>

using namespace std;

int main()
{
    int n,i,a,b,count1=0,count2=0;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;

        if(a>b)
            count1++;
        else if(a<b)
            count2++;
    }

    if(count1>count2)
        cout<<"Mishka"<<endl;
    else if(count1<count2)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
