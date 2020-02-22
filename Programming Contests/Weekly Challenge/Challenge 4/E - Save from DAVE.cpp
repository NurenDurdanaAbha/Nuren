#include<iostream>
#include<string.h>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     //freopen("output.txt","w",stdout);

    char s[10000],s1[10000],s2[10000];
    int i,len,j,k;

    while(cin.getline(s,10000))
    {
      if(strcmp(s,"DONE")==0)
            break;

      len = strlen(s);

      j=0;
      for(i=0; i<len; i++)
      {
          s[i]=tolower(s[i]);

          if(s[i]!=' ' && s[i]!='!' && s[i]!='?' && s[i]!=',' && s[i]!='.' && s[i]!='\'')
          {
            s1[j++]=s[i];
          }
      }

      k=0;
      for(i=j-1; i>=0; i--)
      {
          s2[k++]=s1[i];
      }

        if(strcmp(s1,s2)==0 || len==0)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;

    }
    // system("notepad output.txt");


    return 0;
}
