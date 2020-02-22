#include<iostream>
using namespace std;
class bank
{
    int balance;
    public:
        void setbalance (int x)
        {
        balance=x;
        }
        int show()
        {
            return balance;
        }
};
int main()
{
    bank a;
    a.setbalance(500);
    cout << a.show() << endl;
    return 0;
}
