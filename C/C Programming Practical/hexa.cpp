#include<stdio.h>
int main()
{
 int n,h=0,r,i=1;

 scanf("%d",&n);
 while(n)
    {
 r=n%16;
 n/=16;
 //h=h +r*i;
 //i=i*10;

 if(r==10)
    printf("A");

   if(r==11)
    printf("B");

  if(r==12)
    printf("C");

     if(r==13)
    printf("D");

     if(r==14)
    printf("E");

     if(r==15)
    printf("F");
 }

  printf("%d",h);


 return 0;
}
