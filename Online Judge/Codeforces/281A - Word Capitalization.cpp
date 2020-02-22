#include<iostream>

using namespace std;

int main()
{
    int i,len;
    string a;

    cin>>a;
    len=a.size();

    for(i=0; i<len; i++)
    {
        if(a[0]>=97 && a[0]<=122)
            a[0]='A'+a[0]-'a';
    }

    cout<<a<<endl;;

    return 0;
}
