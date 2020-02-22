#include<iostream>
using namespace std;

class compute
{
    long long fact;
public:
    compute(int n)
    {
        fact = 1;
        cout<<"Output = "<<get_fact(n)<<endl;
    }
    long long get_fact(int n)
    {
        for(int i=1;i<=n;i++)
        {
            fact = fact * i;
        }
        return fact;
    }

};

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    compute f(n);
    return 0;
}
