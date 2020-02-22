#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,t=1;
    char a[1000][1000];

    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>a[i][j];

                if(a[i][j]=='.')
                    a[i][j]=48;
            }
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]=='*')
                {
                    if(a[i-1][j-1]=='*')
                        a[i-1][j-1]='*';
                    else
                       a[i-1][j-1]++;

                    if(a[i-1][j]=='*')
                        a[i-1][j]='*';
                    else
                       a[i-1][j]++;

                    if(a[i-1][j+1]=='*')
                        a[i-1][j+1]='*';
                    else
                       a[i-1][j+1]++;

                    if(a[i][j-1]=='*')
                        a[i][j-1]='*';
                    else
                       a[i][j-1]++;

                    if(a[i][j+1]=='*')
                        a[i][j+1]='*';
                    else
                       a[i][j+1]++;

                    if(a[i+1][j-1]=='*')
                        a[i+1][j-1]='*';
                    else
                       a[i+1][j-1]++;

                    if(a[i+1][j]=='*')
                        a[i+1][j]='*';
                    else
                       a[i+1][j]++;

                    if(a[i+1][j+1]=='*')
                        a[i+1][j+1]='*';
                    else
                       a[i+1][j+1]++;
                }
            }
        }

        if(t>1)
            cout<<endl;
        cout<<"Field #"<<t++<<":"<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cout<<a[i][j];
            }
                cout<<endl;
        }




    }
    return 0;
}
