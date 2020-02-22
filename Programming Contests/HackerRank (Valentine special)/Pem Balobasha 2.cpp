#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char a[100];
    int l,i;

    while(cin.getline(a,100))
    {
        l=strlen(a);

        for(i=l-1; i>=0; i--)
            cout<<a[i];

            cout<<endl;
    }

    return 0;
}
