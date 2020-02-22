#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char pro[1000][1000],tag[1000][1000],key[1000][1000];
    char p[1000],t[1000],k[1000];
    int i,j,m,n;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p;
        strcpy(pro[i],p);
        getchar();
        cin>>t;
        strcpy(tag[i],t);
    }

    cin>>m;
    for(j=1; j<=m; j++)
    {
        cin>>k;
        strcpy(key[j],k);
    }

    for(i=1; i<=m; i++)
    {
        int f=0;
        int ff=0;
        for(j=1; j<=n; j++)
        {
            if(strcmp(key[i],tag[j])==0 && f!=1)
            {
                cout<<pro[j];
                f=1;
                ff=1;
            }
            else if(strcmp(key[i],tag[j])==0 && f==1)
            {
                cout<<","<<pro[j];
                ff=1;
            }

        }

        if(ff!=0)
        cout<<endl;

        if(ff==0)
            cout<<"Sorry the product is not available :("<<endl;
    }





    return 0;
}
