#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll;
public:
    void get_data()
    {
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter roll: ";
        cin>>roll;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
    }
};

class Exam:public Student
{
    double marks[7];
public:
    double sum=0.0;
    void get_marks()
    {
        Student::get_data();
        cout<<"Enter 6 subject marks: ";
        for(int i=1;i<=6;i++)
        {
            cin>>marks[i];
            sum =sum+ marks[i];
        }
    }
    double display()
    {
        return sum;
    }
};

class Result:public Exam
{
    double totalmarks;
public:
    void get_result()
    {
        get_marks();

    }
    void display()
    {
        Exam::Student::display();
        totalmarks = Exam::display();
        cout<<"Total Mark: "<<totalmarks<<endl;
    }
};


int main()
{
    Result r1;
    r1.get_result();
    r1.display();
    return 0;
}
