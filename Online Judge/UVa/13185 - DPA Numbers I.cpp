#include<stdio.h>

int main()
{
    int i,n,s,t,k=1;

    scanf("%d",&t);
    while(k<=t)
    {
        scanf("%d",&n);

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
        printf("perfect\n");
   }
    else if(s<n)
    {
         printf("deficient\n");
    }
    else if(s>n)
    {
        printf("abundant\n");
    }

    k++;
}

    return 0;
}
