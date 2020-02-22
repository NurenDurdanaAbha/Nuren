#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[100001],max=0,min=0,i,n;

    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(i=1; i<n; i++)
        max+=a[i];

    for(i=0; i<n-1; i++)
        min+=a[i];

    cout<<min<<" "<<max<<endl;

    return 0;
}
