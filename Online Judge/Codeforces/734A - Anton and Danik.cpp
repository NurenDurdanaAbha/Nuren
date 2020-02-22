#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i,anton=0,danik=0;
    char ch;

    cin>>n;
    getchar();
    for(i=0; i<n; i++)
    {
        cin>>ch;

        if(ch=='A')
            anton++;
        else
            danik++;
    }

    if(anton==danik)
        cout<<"Friendship"<<endl;
    else if(anton>danik)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;


    return 0;
}
