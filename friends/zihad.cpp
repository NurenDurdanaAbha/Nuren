#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,flag=1;

    scanf("%d",&n);

    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            flag=2;
        break;
    }


    if(flag==1)
        printf("%d is  a prime number",n);
    else
        printf("%d is not a prime number",n);

    return 0;
}
