#include<iostream>
#include<math.h>

using namespace std;

class p
{
private:
    double m;
    int n;

public:
    double power(double m, int n)
    {
        return pow(m,n);
    }

    double power(double m, int n=0)
    {
        return m*m;
    }

};



int main()
{
    p a,b;

    cout<<a.power(10.1,3)<<endl<<endl;
    cout<<b.power(6.7)<<endl;

    return 0;
}
