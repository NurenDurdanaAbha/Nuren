#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("Integers.txt","w");

    int n,i;
    printf("Enter number of items: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fprintf(fp,"%d  ",i);
    }

    fclose(fp);

    return 0;
}
