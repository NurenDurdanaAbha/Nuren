#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s1[1001],s2[1001];
    int len,i;

    cin>>s1>>s2;
    len=strlen(s1);

    for(i=0; i<len; i++)
    {
        if(s1[i]>=97 && s1[i]<=122)
            s1[i]='A'+s1[i]-'a';

        if(s2[i]>=97 && s2[i]<=122)
            s2[i]='A'+s2[i]-'a';

    }


   if(strcmp(s1,s2)==0)
    cout<<"0"<<endl;
   else if(strcmp(s1,s2)>0)
    cout<<"1"<<endl;
   else
    cout<<"-1"<<endl;

    return 0;
}
