#include<stdio.h>

int main()
{
    int m,i,a[100];
    float p=0.0,n=0.0,z=0.0;

    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);

    for(i=0; i<m; i++)
    {
        if(a[i]>0)
            p++;
        else if(a[i]<0)
            n++;
        else
            z++;
    }

    printf("%.6f\n",p/m);
    printf("%.6f\n",n/m);
    printf("%.6f\n",z/m);


    return 0;
}
