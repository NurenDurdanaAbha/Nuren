#include<iostream>

using namespace std;

class cubes
{
public:
    void cube_function(int n)
    {
    int a,b,f;

            f=1;
        for(a=1; a<58; a++)
        {
            for(b=1; b<57; b++)
            {
                if(n == ((a*a*a)-(b*b*b)))
                {
                   f=2;
                }
                if(f==2)
                    break;
            }
            if(f==2)
                    break;
        }

        if(f==1)
            cout <<"No solution" << endl;
        else
            cout << a << " " << b << endl;
    }
};




int main()
{
    int n;
    cubes Nuren;

    while(1)
    {
        cin >> n;

        if(n==0)
            break;

        cubes Nuren;

        Nuren.cube_function(n);

    }

    return 0;
}
