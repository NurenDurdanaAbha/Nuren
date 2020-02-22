#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int test,t;
    char m[4],d[4];

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
       scanf("%s",m);
       scanf("%s",d);

       if(strcmp(m,"JAN")==0 || strcmp(m,"MAR")==0 || strcmp(m,"MAY")==0 || strcmp(m,"JUL")==0 || strcmp(m,"AUG")==0 || strcmp(m,"OCT")==0 || strcmp(m,"DEC")==0)
       {
           if(strcmp(d,"SUN")==0 || strcmp(d,"MON")==0 || strcmp(d,"TUE")==0)
            cout<<"8"<<endl;
           else if(strcmp(d,"WED")==0 || strcmp(d,"SAT")==0)
            cout<<"9"<<endl;
           else
            cout<<"10"<<endl;
       }
       else if(strcmp(m,"FEB")==0)
        cout<<"8"<<endl;
       else
       {
           if(strcmp(d,"SAT")==0 || strcmp(d,"THU")==0)
            cout<<"9"<<endl;
           else if(strcmp(d,"FRI")==0)
            cout<<"10"<<endl;
           else
            cout<<"8"<<endl;
       }
    }

    return 0;
}
