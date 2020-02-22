#include<stdio.h>
int main()
{
    int a[6],n,i,s=0;
    printf("enter the group number=");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the group student number %d=",i+1);
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("sumasition=%d\n",s);
    return 0;
}
