#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char str[100];

    ifstream inf("soma.txt");

    while(inf)
    {
        inf.getline(str,100);
        cout<<str<<endl;
    }

    inf.close();

    return 0;
}
