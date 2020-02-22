#include<iostream>

using namespace std;

int main()
{
    int i,j,k,s,n,p=1;


    cin>>n;
        for(i=1;i<=n;i++)
        {
        for(s=1; s<=n-i; s++)
            cout<<" ";

            for(j=1;j<=i;j++)
            {
                 for(k=1;k<=i-9;k++)
                 {
                   cout<<k;
                 }
            }

//        for(k=i-1;k>=1;k--)
//            cout<<k;

        cout<<endl;
        }

    return 0;
}
