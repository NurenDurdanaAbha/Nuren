#include<iostream>

using namespace std;

int main()
{
    int r,c,a[5][5],b[5][5],sub[5][5],i,j;
    cin>>r;
    cin>>c;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            cin>>a[i][j];
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            cin>>b[i][j];
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            sub[i][j]=a[i][j]-b[i][j];
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<sub[i][j];
        }
        cout << endl;
    }

    return 0;

}
