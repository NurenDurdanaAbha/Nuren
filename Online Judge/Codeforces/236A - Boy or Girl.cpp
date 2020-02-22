#include<iostream >

using namespace std;

int main()
{
    string s;
    int l;

    getline(cin,s);

    l=s.length();

    if(l%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;


    return 0;
}
