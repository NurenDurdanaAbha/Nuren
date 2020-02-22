#include<stdio.h>
int main()
{
    long int n,q=0,t,b,i,j,x,y,v;
    scanf("%ld %ld",&n,&t);
    long int a[n];
    for(i=0 ; i<n ;i++)
    {
        scanf("%ld",&a[i]);
        if(	a[i] >0)
        q++;
    }
    for(j=0 ;j<t ;j++)
    {
        scanf("%ld %ld",&v,&y);
        b=y-1;
        if(v==2)
        {
            a[b]++;
            if(a[b]==1)
            q++;
        }
        else
        {
            a[b]--;
            if(a[b]<=0)
            q--;
        }
        printf("%ld\n",q);
    }
    return 0;
}
