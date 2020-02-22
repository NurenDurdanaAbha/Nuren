#include<stdio.h>

struct form
{
    int roll;
    float gpa;
};
int main()
{
    form s[10000];
    int i;

    for(i=1; i<=4; i++)
    {
        printf("Enter the roll of the student %d:  ",i);
        scanf("%d",&s[i].roll);

        printf("Enter the gpa of the student %d:  ",i);
        scanf("%f",&s[i].gpa);

    }

    for(i=1; i<=4; i++)
    {
    printf("%d\n",s[i].roll);
    printf("%.2f\n",s[i].gpa);
    }

    return 0;
}
