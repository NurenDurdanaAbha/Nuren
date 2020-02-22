#include<stdio.h>
struct ad
{
    int roll,sum;
    struct marks
    {
        int bangla,english,math;
    }marks;
};ad s[1000];
int  main()
{
    int temp,n,i,j;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         printf("Enter the roll of the student : ");
         scanf("%d",&s[i].roll);
         printf("Enter the number of 3 subject.\n\n");
         printf("Bangla = ");
         scanf("%d",&s[i].marks.bangla);
         printf("English = ");
         scanf("%d",&s[i].marks.english);
         printf("Math = ");
         scanf("%d",&s[i].marks.math);
         s[i].sum = s[i].marks.bangla + s[i].marks.english + s[i].marks.math;
     }
    for(i=1;i<=n;i++)
        printf("\nRoll = %d ----> Totalmarks = %d\n",s[i].roll,s[i].sum);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(s[j].sum < s[j+1].sum)
            {
                temp = s[j].sum;
                s[j].sum = s[j+1].sum;
                s[j+1].sum = temp;
            }
        }
    }
    printf("\n\n\n\t\t\.................Result........................\n\n\n");
    for(i=1;i<=n;i++)
        printf("%d position = %d\n",i,s[i].sum);
        return 0;
}
