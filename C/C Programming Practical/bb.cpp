 //Write a program to convert any integer to its binary equivalent
#include<stdio.h>
int main()
{
 int n,b=0,r,i=1;

 scanf("%d",&n);
 while(n)
    {
 r=n%2;
 n/=2;
 b=b  +r*i;
 i=i*10;
 }
 printf("%d",b);
 return 0;
}
