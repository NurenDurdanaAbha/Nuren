#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t,n,a[100],H,M,m,count,i;

    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0; i<n; i++)
            cin>>a[i];

        scanf("%d:%d",&H,&M);

        m = H*60 + M;

        count=0;
        for(i=0; i<n; i++)
        {
            if(a[i]<=m)
                count++;
        }

        cout<<count<<endl;
    }



    return 0;
}
