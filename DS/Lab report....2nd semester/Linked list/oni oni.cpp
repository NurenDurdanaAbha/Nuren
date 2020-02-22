#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *head,*next,*start,*loc=NULL;
    int item;
    head=(node *)malloc(sizeof(node));
    start=head;

    while(1)
    {
        scanf("%d",&head->info);
        if(head->info==0)
           {
              // head->link=NULL;
               break;
           }
        next=(node *)malloc(sizeof(node));

        head->link=next;
        //next->link=NULL;

        head=next;
    }
    printf("\n\n");
    scanf("%d",&item);
    while(start!=NULL)
    {
        if(start->info==item)
        {
            loc=start;
            break;
        }
        start=start->link;
    }

    if(loc==NULL)
        printf("Data not found");
    else
        printf("LOCATION=%d",loc);

    return 0;
}
