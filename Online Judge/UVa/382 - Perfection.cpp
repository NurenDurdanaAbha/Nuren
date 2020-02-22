#include<stdio.h>

int main()
{
    int i,n,s;

    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
            printf("END OF OUTPUT\n");
        }

        s=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }

   if(s==n)
   {
        printf("%5d  PERFECT\n",n);
   }
    else if(s<n)
    {
         printf("%5d  DEFICIENT\n",n);
    }
    else if(s>n)
    {
        printf("%5d  ABUNDANT\n",n);
    }
}

    printf("END OF OUTPUT\n");

    return 0;
}
