#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    static int count;
    char name[100];
    int roll;
public:
    static void showcount()
    {
        cout<<count<<endl;
    }

    inline void get_data(char* nam = "jhdkeuarbcqjegcelya",int rol=0)
    {
        strcpy(name,nam);
        roll = rol;
        count++;
    }
    inline void put_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }

};
int Student::count;

int main()
{
    Student s1,s2;
//    cout<<"Name: ";
//    char nam[10];
//    cin>>nam;

    s2.showcount();
    s1.showcount();

    s1.get_data("Fahim",23);
    s1.put_data();

    s1.showcount();

//    cout<<"Name: ";
//    char namm[10];
//    cin>>namm;
    s2.get_data("Faysal",123);
    s2.put_data();
    s2.showcount();
    s1.showcount();


    return 0;
}
