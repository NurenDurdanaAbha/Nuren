#include<iostream>

using namespace std;

int main()
{
    int n,sock[100],i,j;

    cin>>n;

    for(i=0; i<n; i++)
        cin>>sock[i];

    for(i=0; i<n; i++)
    {
        int item;
        item=a[i];
        int k=i;

        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j] && a[i]!=a[--k])
                a[i]=j;
        }

    }



    return 0;
}
