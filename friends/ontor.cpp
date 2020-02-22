#include<stdio.h>
int main()
{
    int a[10]={1,2,4,5,6};
    int loc,item;
    int i,size=5;
    printf("Array: ");
    for(i=0;i<size;i++)
    printf(" %d",a[i]);
    printf("\nEnter the Item to insert in the array: ");
    scanf("%d",&item);
    printf("\nEnter Loc where to be insert: ");
    scanf("%d",&loc);
     i=size;
    while(i>=loc)
    {
        a[i+1]=a[i];
        i=i-1;
    }

    a[loc]=item;
    size=size+1;
    for(i=0;i<size;i++)
        printf("\n%d",a[i]);
    return 0;
}
