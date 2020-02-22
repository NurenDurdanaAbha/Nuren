#include<iostream>
using namespace std;

class Student
{
    char name[30];
    int roll;
    char sem[10];
    char sec[10];
    int marks[6];
    int totalMarks;
public:
    //Student(){}
    Student()
    {
        totalMarks = 0;
    }
    void get_data()
    {
        cout<<"Enter name: ";
        cin.getline(name,30);
        cout<<"Enter roll no.: ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter semester: ";
        cin>>sem;
        cout<<"Enter section: ";
        cin>>sec;
        cout<<"Enter marks of 5 subject: ";
        for(int i=1;i<=5;i++)
        {
            cin>>marks[i];
            totalMarks = totalMarks + marks[i];
        }
    }
    void display()
    {
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Semester: "<<sem<<endl;
        cout<<"Section: "<<sec<<endl;
        cout<<"Total marks: "<<totalMarks<<endl;
    }
};

int main()
{
    Student s;
    s.get_data();
    s.display();
    return 0;
}
