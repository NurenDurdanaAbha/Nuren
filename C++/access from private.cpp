#include<iostream>

using namespace std;

class rectangle
{
private:
    int width,height;
public:
    int set(int h, int w)
    {
        height=h;
        width=w;
    }
    int area()
    {
        return height*width;
    }
};

int main()
{
    int h,w;
    rectangle obj;

    cin>>h;
    cin>>w;

    obj.set(h,w);

    cout<<obj.area()<<endl;

    return 0;
}
