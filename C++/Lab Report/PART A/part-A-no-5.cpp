//power function

#include<iostream>
using namespace std;

class Math
{
    double f=1;
public:
    double pow(double m,int n=2)
    {

        for(int i=1;i<=n;i++)
        {
            f=f*m;
        }
        return f;
    }
};

int main()
{
    Math Obj;

    cout<<Obj.pow(3.5,4)<<endl;

    return 0;
}
