#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char a[10000],s[10000];
    int test,t,i,l,j,k,f;

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
        cin.getline(a,10000);

        l=strlen(a);

        j=0;
        f=0;
        if(a[0]=='S' && a[1]=='i'&& a[2]=='m'&& a[3]=='o'&& a[4]=='n'&& a[5]==' '&& a[6]=='s'&& a[7]=='a'&& a[8]=='y'&& a[9]=='s')
        {
          for(k=11; k<l; k++)
            {
              s[j++]=a[k];
            }
            f=1;
        }

        if(f==1)
        {
            for(k=0; k<j; k++)
                cout<<s[k];

                cout<<endl;
        }
    }


    return 0;
}

