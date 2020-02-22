#include<stdio.h>
struct form
{
    int roll;
    int totalmarks;
} ;form s[100],temp;
int main()
{
    int i,j,n;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    printf("Enter the Roll No : ");
    for(i=0;i<n;i++)
        scanf("%d",&s[i].roll);

    for(i=0;i<n;i++)
        scanf("%d",&s[i].totalmarks);
    for(i=0;i<n;i++)
        printf("Roll = %d\n",s[i].roll);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if((s[j].totalmarks) < (s[j+1].totalmarks))
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\n\n\n\t\t\.................Result........................\n\n\n");
    for(i=0;i<n;i++)
        printf("Roll = %d\n",s[i].roll);
        return 0;
}
