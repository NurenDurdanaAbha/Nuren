#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char s[100];
    int i,l,test,t,count,sum;

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
       cin.getline(s,100);
       l=strlen(s);

       sum=0;
       count=0;
       for(i=0; i<l; i++)
       {
           if(s[i]=='O')
           {
              count++;
              sum+=count;
           }
           else
             count=0;
       }

       cout<<sum<<endl;
    }


    return 0;
}
