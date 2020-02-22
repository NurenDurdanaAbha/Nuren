#include<iostream>

using namespace std;

int main()
{
    long long int i,n,gun=0;

    cin>>n;
    for(i=1; i<=10; i++)
    {
        gun=i*n;
        cout<<i<<" x "<<n<<" = "<<gun<<endl;
    }


    return 0;
}
