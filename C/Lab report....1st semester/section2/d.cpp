#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return (n* factorial(n-1));
}
void sum(float x, int n)
{
    float s=0.0;
    int i,j,k;
    i=1;
    j=0;
    for(k=1;k<=n;k++)
        {
            s = s + pow(-1,j)*pow(x,i)/factorial(i);
            i=i+2;
            j++;
        }
        printf("Result : %.3f",s);
}
int main()
{
    int n;
    float x;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the umber of item : ");
    scanf("%d",&n);
    sum(x,n);
    return 0;
}




//int i,f=1;
    //for(i=1;i<=n;i++)
    //{
      //  f=f*i;
    //}
        //return f;
