#include<stdio.h>

int main()
{
    char a[1000];


     while(scanf("%s",&a))
     {
    if(a[0]=='H')
    {
        printf("Hajj-e-Akbar");
    }
     else if(a[0]=='U')
    {
        printf("Hajj-e-Asghar");
    }
    else if(a[0]=='*')
    {
       break;
    }
     }

    return 0;
}
