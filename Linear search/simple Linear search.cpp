#include<iostream>

using namespace std;

int main()
{
    int n,a[100],i,item,loc=0,flag=0;

    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];

    cin>>item;

    for(i=1; i<=n; i++)
    {
        if(a[i]==item)
        {
          loc=i;
          cout<<item<<" is found at location: "<<loc<<endl;
          flag=1;
        }
    }

    if(flag==0)
        cout<<item<<" is not in the array"<<endl;


    return 0;
}
