#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *start,*first,*loc, *save,*PTR,*print;
    int ITEM;

    //create:
    first=(node *)malloc(sizeof(node));
    start=first;
    print=first;
    printf("Enter Numbers to insert in Linked List, 0 to stop: ");

    while(1)
    {
        scanf("%d",&first->info);
        if(first->info==0)
            break;

        printf("%d Stored at: %d\n",first->info,first);

        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        first->link = next;
        first=next;
    }

    //1.
    if(start==NULL)
    {
        loc=NULL;
        return 0;
    }

    scanf("%d",&ITEM);

    //2.
    if(ITEM < start->info)
    {
        loc=NULL;
        printf("\n\n%d\n",loc);
        return 0;
    }

    //3.
    save=start;
    PTR=start->link;

    //4.
    while(PTR!=NULL)
    {
        //5.
        if(ITEM < PTR->info)
        {
            loc=save;
            printf("\n\n%d\n",loc);
            return 0;
        }
    }

    //6.
    save = PTR;
    PTR= PTR->link;

    //7.
    loc=save;

    printf("\n\n%d\n",loc);

    return 0;
}
