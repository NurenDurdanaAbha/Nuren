#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    char name[30],roll[10];
    int b,e,m;

    void input()
    {
        char ch;
        cout<<"Name: ";
        cin.getline(name,30);
        cout<<"Roll: ";
        cin>>roll;
        cout<<"Marks of Bangali: ";
        cin>>b;
        cout<<"Marks of English: ";
        cin>>e;
        cout<<"Marks of Math: ";
        cin>>m;
        scanf("%c",&ch);
        //getchar();
        //cin.ignore();
    }
    void output()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks of Bangali: "<<b<<endl;
        cout<<"Marks of English: "<<e<<endl;
        cout<<"Marks of Math: "<<m<<endl;
        cout<<endl<<"TOTAL: "<<b+e+m<<endl;
        cout<<"AVERAGE: "<<(b+e+m)/3<<endl;
    }
};

int main()
{
    int i,n;
    char ch;
    cout<<"How many students: ";
    cin>>n;
    scanf("%c",&ch);
    //getchar();
    //cin.ignore();
    student *s;
    s = new student[n];
    for(i=1;i<=n;i++)
    {
        cout<<"\nStudent# "<<i<<endl;
        s[i].input();
    }
    for(i=1;i<=n;i++)
    {
        cout<<"\n\nStudent# "<<i<<endl;;
        s[i].output();
        cout<<"\n";
    }
    //delete []s;

//    for(i=1;i<=n;i++)
//    {
//        cout<<"\n\nStudent# "<<i<<endl;;
//        s[i].output();
//        cout<<"\n";
//    }
    return 0;
}
