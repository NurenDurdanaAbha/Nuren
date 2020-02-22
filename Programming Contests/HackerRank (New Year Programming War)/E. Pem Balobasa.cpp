#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char s[102],a[102];
    int i,j;

    while(cin>>s)
    {
        j=0;
      for(i=0; i<=strlen(s); i++)
      {
         if(s[i]!='m' && s[i]!='r' && s[i]!='z' && s[i]!='i' && s[i]!='a')
            a[j++]=s[i];
      }
      cout<<a<<endl;
    }

    return 0;
}
