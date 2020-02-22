#include<iostream>

using namespace std;

int b[100000];

int main()
{
    int a[100000],i,n,k,max;

    cin>>n;
    for(i=1; i<=n; i++)
    {
       cin>>a[i];
       k=a[i];

       b[k]++;
    }


    for(i=1; i<=2147483647; i++)
    {
        if(b[i]==1)
        {
           cout<<i<<endl;
           break;
        }
    }




    return 0;
}
