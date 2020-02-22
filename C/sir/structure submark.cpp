#include<stdio.h>
struct form
{
    int roll,total;
    int subMARKS[3];
};

int main()
{
    form s[10000],b;
    int i,j;

    for(i=1; i<=5; i++)
    {
        scanf("%d",&s[i].roll);
        printf("Enter 3 subject marks:  \n");
        s[i].total=0;

        for(j=1; j<=3; j++)
        {
            scanf("%d",s[i].subMARKS[j]);
            s[i].total=s[i].total+s[i].subMARKS;
        }
    }

}
