#include<iostream>

using namespace std;

class Distance
{
    int feet;
    int inch;
    public:
        Distance()
        {
            ///constractor
        }
        void getdata(int m,int n)
        {
            feet = m;
            inch = n;
        }
        void display()
        {
            cout<<"Feet: "<<feet<<endl;
            cout<<"Inch: "<<inch<<endl;
        }
        Distance operator +(Distance n)
        {
            Distance p;

            p.feet = feet + n.feet;
            p.inch = inch + n.inch;

            return p;
        }

};


int main()
{
    Distance a,b,result;

    int x,y;

    cout<<"Enter the value of first object: ";
    cin>>x>>y;
    a.getdata(x,y);

    cout<<"Enter the value of second object: ";
    cin>>x>>y;
    b.getdata(x,y);

    result = a + b;
    result.display();

    return 0;
}
