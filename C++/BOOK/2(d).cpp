#include<iostream>

using namespace std;

class xyz;

class abc
{
    private:
        int a;
    public:
        void get(int n)
        {
            a=n;
        }
        int putData()
        {
            return a;
        }
        friend void swapData(abc &m, xyz &n);
};

class xyz
{
    private:
        int x;
    public:
        void get(int n)
        {
            x=n;
        }
        int putData()
        {
            return x;
        }
        friend void swapData(abc &m, xyz &n);
};


void swapData(abc &m, xyz &n)
{
    int swap;

    swap=m.a;
    m.a=n.x;
    n.x=swap;
}


int main()
{
    int n;
    abc p;
    xyz q;

    cin>>n;
    p.get(n);

    cin>>n;
    q.get(n);

    cout<<endl<<"Initial state of data"<<endl;
    cout<<"class abc: "<<p.putData()<<endl;
    cout<<"class xyz: "<<q.putData()<<endl;

    swapData(p,q);

    cout<<endl<<"After swaping data"<<endl;
    cout<<"class abc: "<<p.putData()<<endl;
    cout<<"class xyz: "<<q.putData()<<endl;

    return 0;
}
