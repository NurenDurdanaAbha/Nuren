#include<stdio.h>
#include<bits/stdc++.h>

int main()
{
    //freopen("output.txt","w",stdout);

    int a[100000],b[100000],i,t,n,j,f;

    while(scanf("%d",&n)!=EOF)
    {

    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

        j=1;
      for(i=1; i<=n-1; i++)
       {
        if(a[i] > a[i+1])
        {
            b[j]= a[i] - a[i+1];
            b[n]=0;
        }

        else
        {
           b[j]= a[i+1] - a[i];
           b[n]=0;
        }


           j++;
       }

     //  ///output
    //for(j=1; j<=n; j++)
           // printf("%d ",b[j]);

       f=1;

        for(j=1; j<=n; j++)
            {
                    if(b[j]>=n)
                            f=2;

                    for(i=j+1; i<=n; i++)
                    {
                        if(b[j] == b[i])
                            f=2;
                    }

            }

            if(n==1)
                f=1;

        if(f==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");



    }
   // system("notepad output.txt");

    return 0;
}
