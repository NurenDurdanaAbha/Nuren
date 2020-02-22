#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char s[100];
    int i,l,test,t,count1,count2,count3,count4,count5,count6,flag;

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
        count1=0;
        count2=0;
        count3=0;
        count4=0;
        count5=0;
        count6=0;

    cin.getline(s,100);
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(count1>=count2)
        {
            if(s[i]=='(')
                count1++;

            if(s[i]==')')
                count2++;
        }
        else
            break;



        if(count3>=count4)
        {
            if(s[i]=='{')
                count3++;

            if(s[i]=='}')
                count4++;
        }
        else
            break;


       if(count5>=count6)
       {
            if(s[i]=='[')
                count5++;

            if(s[i]==']')
                count6++;
       }
       else
        break;

        flag=0;
        if(s[i]=='<' && s[i+1]=='3')
            flag=1;
        else if(s[i]!='<' && s[i+1]!='3')
            flag=1;
        else
            break;

    }

    if(count1==count2 && count3==count4 && count5==count6 && flag==1)
        cout<<"Balanced <3"<<endl;
    else
        cout<<"Not Balanced :'("<<endl;
    }


    return 0;
}
