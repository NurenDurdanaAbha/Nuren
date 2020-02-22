#include<iostream>

using namespace std;

class book
{
    public:
  int page;
  string name;
};

int main()
{
    book a, b;
    string ab = 'haumau',bb = 'kaukau';
    a.page=10;
    a.name= ab;

    b.page=100;

    b.name= bb;

    cout << a.page << " " << a.name << endl;
    cout << b.page << " " << b.name << endl;

    return 0;
}
