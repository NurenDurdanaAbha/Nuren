#include<iostream>

using namespace std;

int main()
{
    int n,a[1000],i,item,loc=0,flag=0;

    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(i=1; i<=n; i++)
        cin>>a[i];

    cout<<"Enter item to search: ";
    cin>>item;

    for(i=1; i<=n; i+=2)
    {
        if(a[i]==item)
        {
          loc=i;

          if(flag==0)
          cout<<endl<<item<<" is found at location: ";

          cout<<loc<<" ";
          flag=1;
        }

        if(i!=n)
        {
          if(a[i+1]==item)
            {
                loc=i+1;

                if(flag==0)
                    cout<<endl<<item<<" is found at location: ";

                cout<<loc<<" ";
                flag=1;
            }
        }
    }

    cout<<endl;

    if(flag==0)
        cout<<endl<<item<<" is not in the array"<<endl;


    return 0;
}
