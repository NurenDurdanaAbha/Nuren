#include<iostream>

using namespace std;

class rectangle
{
public:
    int width,height;
};

int main()
{
    rectangle obj;
    cin>>obj.height;
    cin>>obj.width;

    int a=obj.height*obj.width;

    cout<<"Area = "<<a<<endl;

    return 0;
}
