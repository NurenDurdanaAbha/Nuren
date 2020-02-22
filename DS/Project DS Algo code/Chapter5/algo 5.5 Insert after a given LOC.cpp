#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *start,*first,*next,*loc, *avail,*NEW,*nexxt,*print;
    int ITEM,locc;

    //create:
    first=(node *)malloc(sizeof(node));
    start=first;
    print=first;
    printf("Enter Numbers to insert in Linked list, 0 to stop: ");

    while(1)
    {
        scanf("%d",&first->info);
        if(first->info==0)
            break;

        printf("%d Stored at: %d\n",first->info,first);

        next = (node *)malloc(sizeof(node));
        next->link=NULL;
        first->link = next;
        first=next;
    }

    printf("\nEnter ITEM:");
    scanf("%d",&ITEM);
    printf("\nEnter location...after where %d is to be inserted:",ITEM);
    scanf("%d",&locc);


    while(start !=NULL)
    {
        //printf("Present Address: %d, info = %d, Next Link = %d\n",start, start->info,start->link);
        if(start->info==locc)
        {
            loc=start;
            nexxt = loc->link;
            break;
        }
        start = start->link;
    }
  //  printf("%d\n",nexxt);



    avail = (node *)malloc(sizeof(node));

    //1.
    if(avail==NULL)
    {
        printf("OVERFLOW\n");
       // return;
    }

    //2.
    NEW=avail;
    avail=avail->link;

    //3.
    NEW->info=ITEM;

    //4.
    if(loc==NULL)
    {
        NEW->link = start;
        start=NEW;
    }
    else
    {
        NEW->link=loc->link;
        loc->link=NEW;
    }


    while(print!=NULL)
    {
        if(print->info==0)
            break;
        printf("\nINFO=%d\n",print->info);
        print=print->link;
    }

    return 0;
}
