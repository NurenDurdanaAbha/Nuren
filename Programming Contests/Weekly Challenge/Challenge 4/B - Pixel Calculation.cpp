#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,f2=0;
    char px[101][101];

    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>px[i][j];
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(px[i][j]=='C' || px[i][j]=='M' || px[i][j]=='Y')
            {
               f2=1;
            }
        }
    }

    if(f2==1)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;


    return 0;
}
