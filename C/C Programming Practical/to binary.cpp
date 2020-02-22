#include<stdio.h>
int main()
{
    int n,r,i=0,a[100];

    scanf("%d",&n);

    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;

        i++;
    }

    printf("%d",a[0]);
    printf("%d",a[1]);
    printf("%d",a[2]);
    printf("%d",a[3]);

//    for(i=i-1; i>=0; i--) //reverse print of array
//    {
//    printf("%d",a[i]);
//    }

    return 0;
}
