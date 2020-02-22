#include<iostream>

using namespace std;

class rectangle
{
public:
    int width,height;

    int area()
    {
        return width*height;
    }
};

int main()
{
    rectangle obj;
    cin>>obj.height;
    cin>>obj.width;

    cout<<obj.area()<<endl;

    return 0;
}
