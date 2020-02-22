#include<stdio.h>
int main()
{
    float mark;
    scanf("%f",&mark);
    if(mark<=100 && mark>=80 )
    {
        printf("GPA=5.00\nGrade=A+\n");
    }
    else if(mark<=79 && mark>=70)
    {
        printf("GPA=4.00\nGrade=A\n");
    }
    else if(mark<=69 && mark>=60)
    {
        printf("GPA=3.50\nGrade=A-\n");
    }
    else if(mark<=59 && mark>=50)
    {
        printf("GPA=3.00\nGrade=B\n");
    }
    else if(mark<=49 && mark>=40)
    {
        printf("GPA=2.00\nGrade=C\n");
    }
    else if(mark<=39 && mark>=33)
    {
        printf("GPA=1.00\nGrade=D\n");
    }
    else if(mark<=32)
    {
        printf("GPA=0.00\nGrade=F\n");
    }
    return 0;
}
