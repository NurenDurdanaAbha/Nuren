#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char cs[]="aaba",ms[100],q0,q1,q2,q3,*rr=" ";
    int n,k=0;

    puts(cs);
    gets(ms);

    n=strlen(ms);
    printf("length= %d\n",n);

    q0:
        printf("\nq0\n");
        if(ms[k]=='a')
        {
            k++;

    q1:
        printf("\nq1\n");
        if(ms[k]=='a')
        {
            k++;

    q2:
        printf("\nq2\n");
        if(ms[k]=='b')
        {
            k++;

    q3:
        printf("\nq3\n");
        if(ms[k]=='a')
        {
            k++;

            printf("\nfound\n");
            printf("INDEX=%d\n",k-n);

            exit(0);
        }
        else
        {
            k++;
            if(k>=n)
            {
                printf("\nINDEX=0\n");
                exit(0);
            }
            goto q0;
        }
        }

        else
        {
            k++;
            if(k>=n)
            {
                printf("\nINDEX=0\n");
                exit(0);
            }
            goto q2;
        }
        }

        else
        {
            k++;
            if(k>=n)
            {
                printf("\nINDEX=0\n");
                exit(0);
            }
            goto q0;
        }
        }
        else
        {
            k++;
            if(k>=n)
            {
                printf("\nINDEX=0\n");
                exit(0);
            }
            goto q0;
        }

}
