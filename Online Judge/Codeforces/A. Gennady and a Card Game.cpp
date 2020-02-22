#include<iostream>

using namespace std;

int main()
{
    char a[3],b[3],flag=0;
    int i;

    cin>>a;

    for(i=1; i<=5; i++)
    {
        cin>>b;

        if(a[0]==b[0] || a[1]==b[1])
        {
           cout<<"YES"<<endl;
           flag=1;
        }
    }

    if(flag==0)
        cout<<"NO"<<endl;

    return 0;
}
