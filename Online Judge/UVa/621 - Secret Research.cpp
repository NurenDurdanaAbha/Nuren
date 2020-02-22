#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int n,i,len,l;
    char s[100000];

    cin>>n;
    while(n--)
    {
        getchar();

            scanf("%s",&s);

        len = strlen(s);

       // cout<<endl<<"len: "<<len<<endl;

            if((s[0]=='1' && len==1) || (s[0]=='4' && len==1) || (s[0]=='7' && s[1]=='8' && len==2))
                cout<<"+"<<endl;
            else if(s[len-1]=='5' && s[len-2]=='3')
                cout<<"-"<<endl;
            else if(s[0]=='9' && s[len-1]=='4')
                cout<<"*"<<endl;
            else
                cout<<"?"<<endl;
    }

    return 0;
}
