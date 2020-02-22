#include<stdio.h>

int main()
{
    int a[100],b[100],c[100],i,j,k=0,p,q,r,temp;

    scanf("%d",&p);
    for(i=0; i<p; i++)
        scanf("%d",&a[i]);

    scanf("%d",&q);
    for(j=0; j<q; j++)
        scanf("%d",&b[j]);


    for(i=0; i<p; i++)
        c[k++]=a[i];

    for(j=0; j<q; j++)
        c[k++]=b[j];


    for(i=0; i<p+q-i; i++)
    {
        for(j=0; j<i; j++)
        {
            if(c[j] > c[j+1])
            {
            temp= c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
            }
        }
    }


    for(k=0; k<p+q; k++)
        printf("%d  ",c[k]);

    return 0;
}
