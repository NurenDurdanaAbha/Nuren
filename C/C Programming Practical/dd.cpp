
#include<stdio.h>
int main()
{
    long long int i;
    for(i=0;i<=1000000000; i++)
    {
        if(i%2==0)
        {
            printf("even: %lld\n",i);
        }
        if(i%2!=0)
        {
            printf("odd: %lld\n",i);
        }
    }
    return 0;
}
