#include<iostream>

using namespace std;

int main()
{
    int a[1000],i,item,n,flag=0;

    cin>>n;
    for(i=1; i<=n; i++)
    {
       cin>>a[i];

       if(a[i]==1)
            flag=1;
    }

    if(flag==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;


    return 0;
}
