#include<stdio.h>
int main()
{
    FILE *fp, *odd, *even;
    fp=fopen("NUMBERS.txt","w");
     odd=fopen("ODD.txt","w");
      even=fopen("EVEN.txt","w");

    int n,i;
    printf("Enter number of items: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fprintf(fp,"%d  ",i);
    }
    fclose(fp);

    fp=fopen("NUMBERS.txt","r");

    while(fscanf(fp,"%d ",&n)!=EOF)
    {
        if(n%2==0)
            fprintf(even,"%d   ",n);
        else
            fprintf(odd,"%d    ",n);
    }

        fclose(fp);
        fclose(odd);
        fclose(even);

    return 0;
}

