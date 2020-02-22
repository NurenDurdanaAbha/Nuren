#include<iostream>

using namespace std;

int main()
{
    char a[100][100];
    int i,n,k,test,t,count;

    cin>>test;
    for(t=1; t<=test; t++)
    {
        count=0;
        cin>>n>>k;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                cin>>a[i][j];
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i][j]=='P' && a[i][j+1]=='T')
                {
                   count++;
                }

                if(a[i][j]=='T' && a[i][j+1]=='P')
                {
                    count++;
                }

            }
        }

    }


    return 0;
}
