#include<stdio.h>
using namespace std;

int main()
{
    int a[100000],n,item,position[100000],dividation,k;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the search item: ");
    scanf("%d",&item);

    k=1;
    for(int i=1; i<=n; i=i+2)
    {
        if(a[i] == item)
        {
            position[k++] = (i);
            if(i == n)
                break;
        }
        if(a[i+1] == item)
        {
            position[k++] = (i+1);
        }
    }

    if(k == 1)
    {
        printf("Data not found.\n");
    }
    else
    {
        printf("Data found at position : ");
        for(int i=1;i<k;i++)
            printf("%d ",position[i]);
    }

    return 0;
}
