//Binary Search(recursive)
#include<iostream>

using namespace std;

int bsearch(int a[],int i,int l,int x)
{
    int mid;
    if(i==l)
    {
        if(a[i] == x)
            return i;
        else
            return 0;
    }
    else
    {
        mid = (i+l)/2;
        if(a[mid] == x)
            return mid;
        else if(a[mid] > x)
            bsearch(a,i,mid-1,x);
        else
            bsearch(a,mid+1,l,x);
    }
}

int main()
{
    int n,a[10],x,loc,i;

    cout<<"Enter number of item: ";
    cin>>n;

    cout<<"Enter data array: ";
    for(i=1;i<=n;i++)
        cin>>a[i];

    cout<<"Enter item to search: ";
    cin>>x;

    loc = bsearch(a,1,n,x);

    cout<<"Location: "<<loc<<endl;

    return 0;
}
