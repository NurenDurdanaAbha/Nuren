#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n ;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",&a);

        if(strlen(a) == 5)
            printf("3\n");

        else if(a[0]=='t' && a[1] == 'w' || a[0] == 't' && a[2] == 'o' || a[1] == 'w' && a[2] == 'o')
            printf("2\n");

        else
            printf("1\n");
    }
    return 0;
}
