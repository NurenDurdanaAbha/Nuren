#include<iostream>

using namespace std;

int main()
{
    int n,i;

    scanf("%d", &n);
    for(i=2; i<=n; i+=2)
    {
        cout<<i<<"^2 = "<<i*i<<endl;
    }


    return 0;
}
