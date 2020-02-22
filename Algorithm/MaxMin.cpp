//Max Min recursive
#include<iostream>

using namespace std;

int a[100];

void maxmin(int i, int j, int &max, int &min)
{
    int mid, max1, min1;
    if(i == j)
        max = min = a[i];
    else if( i == j-1)
    {
        if(a[i] > a[j])
        {
            max = a[i];
            min = a[j];
        }
        else
        {
            max = a[j];
            min = a[i];
        }
    }
    else
    {
        mid = ( i + j ) / 2;

        maxmin(i,mid,max,min);

        maxmin(mid+1,j,max1,min1);

        if(max1 > max )
            max = max1;
        if(min1 < min )
            min = min1;
    }
}

int main()
{
    int n,i,max,min;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];

    maxmin(1,n,max,min);

    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;

    return 0;
}
