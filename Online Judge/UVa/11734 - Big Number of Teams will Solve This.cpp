#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s1[100],s2[100],s3[100];
    int test,t,l1,l2,i,k;

    cin>>test;
    getchar();
    for(t=1; t<=test; t++)
    {
        cin.getline(s1,100);
        cin.getline(s2,100);

        l1=strlen(s1);
        l2=strlen(s2);

        if(strcmp(s2,s1)==0)
            printf("Case %d: Yes\n",t);
        else
        {
            k=0;
            for(i=0; i<l1; i++)
            {
               if(s1[i]!=' ')
                 s3[k++]=s1[i];
            }
            s3[k]='\0';

            if(strcmp(s2,s3)==0)
               printf("Case %d: Output Format Error\n",t);
            else
               printf("Case %d: Wrong Answer\n",t);
        }
    }

    return 0;
}
