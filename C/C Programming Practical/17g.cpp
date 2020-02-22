#include<stdio.h>
int main()
{
    int i,n;
    float s=0.0;
    scanf("%d",&n);

    for(i=1.0; i<=n; i++)
    {
        s=s+(1.0/i);
    }
     printf("%.2f\n",s);

    return 0;
}
