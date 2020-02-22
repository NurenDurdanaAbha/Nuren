#include<bits/stdc++.h>
using namespace std;

class employee
{
    char name[30];
    float age;
public:
    void getdata();
    void putdata();
};

void employee::getdata()
{
    char ch;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    //getchar();
    //scanf("%c",&ch);
    //cin.ignore();
}
void employee::putdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

const int size = 2;
int main()
{
    employee manager[size+1];
    for(int i=1;i<=size;i++)
    {
        cout<<"\nDetails of manager: "<<i<<endl;
        manager[i].getdata();
    }
    cout<<endl<<endl;
    for(int i=1;i<=size;i++)
    {
        cout<<endl<<"Manager: "<<i<<endl;
        manager[i].putdata();
    }
    return 0;
}
