#include<iostream>

using namespace std;

class item
{
    static int count;
    int number;
public:
    void getData(int n)
    {
        number=n;
        count++;
    }
    void getCount()
    {
        cout<<"Count: "<<count<<endl;
    }
};

int item::count;

int main()
{
    item a,b;

    a.getCount();
    b.getCount();

    a.getData(10);
    b.getData(20);

    cout<<endl<<"After reading data"<<endl;
    a.getCount();
    b.getCount();

    return 0;
}
