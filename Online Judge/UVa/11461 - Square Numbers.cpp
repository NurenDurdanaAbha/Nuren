#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,count,i,n;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;

        count =0;
        for(i=a; i<=b; i++)
        {
            n = sqrt(i);
            if(n*n== i)
            {
                count++;
            }
        }
          printf("%d\n",count);
    }

    return 0;
}
