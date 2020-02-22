#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a[100][100],i,j,flag=0,x,y;

    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(((a[i][j]^a[i][j+1])>0) && j+1<=m)
            {
              flag=1;
              x=i;
              y=j+1;
              cout<<"1st"<<endl;
              break;
            }
        }

        if(flag==1)
            break;

        for(j=1; j<=m; j++)
        {
            if(((a[i][j]^a[i+1][j])>0) && i+1<=n)
            {
              flag=1;
              x=i;
              y=j;
              cout<<"2nd"<<endl;
              break;
            }
        }

        if(flag==1)
            break;

        for(j=1; j<=m; j++)
        {
            if(((a[i][j]^a[i-1][j])>0) && i-1>0)
            {
              flag=1;
              x=i;
              y=j;
              cout<<"3rd"<<endl;
              break;
            }
        }

        if(flag==1)
            break;

    }

    if(flag==1)
        cout<<"TAK"<<endl<<x<<" "<<y<<endl;
    else
        cout<<"NIE"<<endl;



    return 0;
}
