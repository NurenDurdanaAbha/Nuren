#include<iostream>

using namespace std;

class rectangle
{
public:
    int width,height;
    int area();
};

inline int rectangle::area()
    {
        return width*height;
    }

int main()
{
    rectangle obj;
    cin>>obj.height;
    cin>>obj.width;

    cout<<obj.area()<<endl;

    return 0;
}
