#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[100];
    float cost;

    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter cost: ";
    cin>>cost;

    ofstream of("DATA");
    of<<name<<endl;
    of<<cost<<endl;
    of.close();

    ifstream inf("DATA");
    inf>>name;
    inf>>cost;

    cout<<"Name: "<<name<<endl;
    cout<<"Cost: "<<cost<<endl;
    inf.close();

    return 0;
}
