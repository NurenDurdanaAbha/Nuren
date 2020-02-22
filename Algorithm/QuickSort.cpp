#include<iostream>
#include<stdio.h>

using namespace std;

int a[1000];

int partition(int p, int q)
{
    int v,i,j,temp;

    v = a[p];
    i=p;
    j=q+1;

    do
    {
        do
        {
            i++;
        }while(a[i] < v);

        do
        {
            j--;
        }while(a[j] > v);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }while(i<j);

    a[p]=a[j];
    a[j]=v;

    return j;
}

void quicksort(int p, int q)
{
    int j;

        if(p < q)
        {
            j = partition(p,q);
            quicksort(p,j-1);
            quicksort(j+1,q);
        }
}

int main()
{
    int n,i;

    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];

    quicksort(1,n);

    for(i=1; i<=n; i++)
        printf("%d ",a[i]);

    cout<<endl;

    return 0;
}
