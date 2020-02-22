#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;

            i = sqrt(n);
            if(i*i== n)
                printf("yes\n");

             else
            printf("no\n");

    }

    return 0;
}
