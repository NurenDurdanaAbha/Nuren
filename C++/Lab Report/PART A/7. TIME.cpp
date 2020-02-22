#include<iostream>
using namespace std;

class TIME
{
    int hours,miniutes,seconds;
public:
    void Take_input()
    {
        cout<<"Enter the hours,miniutes,seconds : ";
        cin>>hours>>miniutes>>seconds;
    }
    void sum(TIME t1,TIME t2)
    {
        seconds = t1.seconds + t2.seconds;
        miniutes = seconds/60;
        seconds = seconds%60;

        miniutes = miniutes + t1.miniutes + t2.miniutes;
        hours = miniutes/60;
        miniutes = miniutes%60;

        hours = hours + t1.hours + t2.hours;
    }
    void display()
    {
        cout<<endl<<hours<<" : "<<miniutes<<" : "<<seconds<<endl;
    }
};

int main()
{
    TIME T1,T2,T3;
    T1.Take_input();
    T2.Take_input();

    T3.sum(T1,T2);
    T3.display();
    return 0;
}
