#include<stdio.h>
int flag[100000],queue[100000];
int main()
{
    int freq[100000]={0},k=0,i=0;
    int x;
   while(scanf("%d",&x)!=EOF)
   {
       // k=0;
            if(flag[x]==0)
            {
                i++;
                flag[x]=1;
                queue[k++]=x;
            }
            freq[x]++;
   }
    for(int j=0;j<i;j++)
        {
            printf("%d %d\n",queue[j],freq[queue[j]]);
        }

    return 0;
}
