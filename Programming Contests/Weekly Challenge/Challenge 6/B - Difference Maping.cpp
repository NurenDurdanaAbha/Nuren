#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    int test,t,l,i;
    char s1[10000],s2[10000];

    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>s1;
        getchar();
        cin>>s2;
        l=strlen(s1);

        cout<<s1<<endl<<s2<<endl;

        for(i=0; i<l; i++)
        {
           if(s1[i]==s2[i])
                cout<<".";
           else
            cout<<"*";
        }
        cout<<endl<<endl;
    }


    return 0;
}

