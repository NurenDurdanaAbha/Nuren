#include<iostream>
using namespace std;

class String
{
    string s;
public:
    String(){}
    String(string a)
    {
        s = a;
    }
    String operator+(String S)
    {
        String sum;
        sum.s = s + S.s;
        return sum;
    }
    String operator=(String S)
    {
        s = S.s;
        return *this;
    }
    void display()
    {
        cout<<s<<endl;
    }
};

int main()
{
    String s1("Fahim "),s2("Faysal"),s3,s4;

    s3 = s1 + s2;
    s3.display();

    s4 = s1;
    s4.display();

    return 0;
}
