#include<bits/stdc++.h>

using namespace std;

int d[10001];

int main()
{
    long long int a[10001],b[10001],c[10001],i,j,n,m,k,p,q;

    scanf("%lld",&m);
    for(i=0; i<m; i++)
        scanf("%lld",&b[i]);

    sort(b,b+m);

    scanf("%lld",&n);
    for(i=0; i<n; i++)
        scanf("%lld",&a[i]);

    sort(a,a+n);

    i=0;
    j=0;
    p=0;
    for(k=0; k<n; k++)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
          //  printf("i= %d  j= %d\n",i,j);
        }
        else if(a[i]<b[i])
        {
            q=a[i];
           // printf("q= %d\n",q);

            if(d[q]!=1)
            {
              c[p++]=a[i];
              d[q]=1;
             // printf("c[p]= %d   i= %d   p= %d\n",c[p],i,p);
            }
            i++;
        }
        else
        {
            if(a[i]!=b[j])
                j++;
            else
                i++;

            if(j==m)
            {
                for(r=i; r<j; r++)
                    c[p++]=a[r];
            }
        }
    }

    for(i=0; i<p; i++)
        printf("%lld ",c[i]);

    printf("\n");


    return 0;
}
