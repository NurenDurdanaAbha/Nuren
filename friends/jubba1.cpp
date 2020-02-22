#include<stdio.h>
int main()
{
    float mark;
    scanf("%f",&mark);
    if(mark<=100 && mark>=80 )
    {
        printf("GPA=5.00, A+");
    }
    else if(mark<=79.9 && mark>=70.1)
    {
        printf("GPA=4.00, A");
    }
    else if(mark<=69.9 && mark>=60.1)
    {
        printf("GPA=3.50, A-");
    }
    else if(mark<=59.9 && mark>=50.1)
    {
        printf("GPA=3.00, B");
    }
    else if(mark<=49.9 && mark>=40.1)
    {
        printf("GPA=2.00, C");
    }
    else if(mark<=39.9 && mark>=33.1)
    {
        printf("GPA=1.00, D");
    }
    else
    {
        printf("GPA=0.00, Fail");
    }
    return 0;
}
