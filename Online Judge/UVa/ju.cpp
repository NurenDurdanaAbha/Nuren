#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,i,j,length,test;
    char s[1000],r[1000][1000],ch;

    scanf("%d%c",&t,&ch);
    while(t--)
    {
        gets(s);

        length = strlen(s);
        test = sqrt(length);

        if(test*test==length)
        {
            int k=0;
            for(i=0;i<test;i++)
            {
                for(j=0;j<test;j++)
                {
                    r[i][j] = s[k++];
                }
            }
            for(i=0;i<test;i++)
            {
                for(j=0;j<test;j++)
                {
                    printf("%c",r[j][i]);
                }
            }
            printf("\n");
        }

        else
            printf("INVALID\n");

    }
    return 0;
}
