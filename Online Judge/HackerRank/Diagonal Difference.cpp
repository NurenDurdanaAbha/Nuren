#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,j,a[100][100],n,sum=0,summ=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            sum = sum + a[i][j];
        }
    }


    j=n;
    for(i=1; i<=n; i++)
    {
            summ = summ + a[i][j--];
    }


    int d=sum-summ;

    if(d<0)
        d=d*(-1);

    cout<<d<<endl;



    return 0;
}
