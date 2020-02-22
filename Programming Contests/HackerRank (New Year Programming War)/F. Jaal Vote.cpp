#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char name[1000][1000],n[1000],jaal[1000][1000];
    int m,i,j,k,p,flag,f;

    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>n;
        strcpy(name[i],n);
    }

    p=1;
    i=1;
    while(i<=m)
    {
        flag=0;
        for(j=i+1; j<=m; j++)
        {
            if(strcmp(name[i],name[j])==0 && i==1)
            {
                cout<<i<<" "<<name[i]<<"  "<<j<<" "<<name[j]<<endl;
                strcpy(jaal[p++],name[i]);
              f=1;
              break;
            }

            else if(strcmp(name[i],name[j])==0 && i>1)
            {
                f=1;

                cout<<i<<" "<<name[i]<<"   j"<<j<<" "<<name[j]<<endl;
                k=1;
            while(k<i)
               {
                   if(strcmp(name[i],name[k])==0)
                   {
                      flag=1;
                   }
                   else
                   {
                       k++;
                   }
               }
               if(flag==0)
                strcpy(jaal[p++],name[i]);
            }
           if(f==1)
                break;

        }
        i++;
    }

    cout<<p-1<<endl;
    for(i=1; i<p; i++)
    {
        cout<<jaal[i]<<endl;
    }

    return 0;
}
