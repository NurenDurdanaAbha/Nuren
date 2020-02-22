#include<iostream>
using namespace std;

class first
{
    int book_no;
    string book_name;
public:
    void getdata()
    {
        cout<<"Enter Book No.: ";
        cin>>book_no;
        cout<<"Enter Book Name: ";
        cin>>book_name;
    }
    void putdata()
    {
        cout<<"Book No.: "<<book_no<<endl;
        cout<<"Book Name: "<<book_name<<endl;
    }
};

class second
{
    string auther_name;
    string publisher;
public:
    void getdata()
    {
        cout<<"Enter Auther_name: ";
        cin>>auther_name;
        cout<<"Enter Publisher: ";
        cin>>publisher;
    }
    void showdata()
    {
        cout<<"Auther_name: "<<auther_name<<endl;
        cout<<"Publisher: "<<publisher<<endl;
    }
};

class third:public first,public second
{
    int noOfPage;
    int yearOfPublishing;
public:
    void getdata()
    {
        first::getdata();
        second::getdata();
        cout<<"Enter no of page: ";
        cin>>noOfPage;
        cout<<"Enter year of publishing: ";
        cin>>yearOfPublishing;
    }
    void display()
    {
        cout<<endl<<endl;
        first::putdata();
        second::showdata();
        cout<<"No of page: "<<noOfPage<<endl;
        cout<<"Year of publishing:: "<<yearOfPublishing<<endl;
    }
};

int main()
{
    third t[100];
    int i;
    string n;

    for(i=0;i<99;i++)
    {
        t[i].getdata();
        t[i].display();
        cout<<endl<<endl<<"If you want to exit, then press 0."<<endl<<"Otherwise any key press to continue."<<endl;

        cin>>n;
        if(n[0] == '0')
            break;
    }

    return 0;
}
