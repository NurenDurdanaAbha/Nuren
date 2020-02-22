#include<iostream>
using namespace std;

int main()
{
    int i,j,k,a[100][100];

    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            cout<<"*";
        }
        for(j=1;j<=i;j++)
        {
            if(j == 1 && i == j)
                a[i][j] = 1;
            else
                a[i][j] = a[i-1][j-1]+a[i-1][j];

            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
