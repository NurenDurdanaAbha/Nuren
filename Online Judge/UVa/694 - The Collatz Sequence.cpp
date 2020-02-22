#include<stdio.h>

int main()
{
    long long int A,L,a;
    int t=1,count;


    while(scanf("%lld%lld",&A,&L)!=EOF)
    {
        if(A<0 && L<0)
            break;

            a=A;
       count=0;
        while(A<=L)
        {
            step:
            if(A==1)
                break;


            if(A%2==0 && A<=L)
            {
                A=A/2;
                    count++;
                goto step;
            }
            else if(A%2!=0 && A<=L)
            {
                A=3*A+1;
                    count++;
                goto step;
            }
        }

        if(A>L)
            printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",t++,a,L,count);
        else
            printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",t++,a,L,count+1);
    }




    return 0;
}
