#include<stdio.h>

int main()
{
    int BEG,LB,END,UB,MID,ITEM,DATA[1000],LOC;

    scanf("%d%d",&LB,&UB);

    for(int i=LB; i<=UB; i++)
        scanf("%d",&DATA[i]);

    BEG=LB;
    END=UB;
    MID=int(BEG+END)/2;

    scanf("%d",&ITEM);

    while(BEG<=END && DATA[MID]!=ITEM)
    {
        if(ITEM<DATA[MID])
            END=MID-1;
        else
            BEG=MID+1;


         MID=int(BEG+END)/2;
    }

    if(DATA[MID]==ITEM)
    {
        LOC=MID;
        printf("%d is found at LOCATION: %d\n",ITEM,LOC);
    }

    else
    {
        LOC=NULL;
        printf("%d is NOT found\n",ITEM);
    }

    return 0;
}
