#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);

    long long int i,a[100000],n,r,m;


    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)
            break;

        m=n;

        i=0;
        while(n!=0)
        {
            a[i]=n%3;
            n=n/3;

            i++;
        }

        if(m==0)
            printf("0");
        else
        {
          for(i=i-1; i>=0; i--)
            {
                printf("%lld",a[i]);
            }
        }

        printf("\n");
    }
   // system("notepad output.txt");

    return 0;
}
