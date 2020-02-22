#include<iostream>

using namespace std;

int main()
{
    int a[100][100],i,j,n=4;

    for(i=1; i<=2*n-1; i++)
    {
       for(j=1; j<=2*n-1; j++)
            a[i][j]=0;
    }

    for(i=1; i<=2*n-1; i++)
    {
       for(j=1; j<=2*n-1; j++)
            cout<<a[i][j]<<" ";

            cout<<endl;
    }

    for(i=1; i<=2*n-1; i++)
    {
       for(j=1; j<=2*n-1; j++)
       {
           if(i==1 || i==2*n-1 || j==1 || j==2*n-1)
                a[i][j]=n--;

       }
    }

        for(i=1; i<=2*n-1; i++)
    {
       for(j=1; j<=2*n-1; j++)
            cout<<a[i][j]<<" ";

            cout<<endl;
    }



    return 0;
}
