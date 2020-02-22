#include<stdio.h>
#include<iostream>

using namespace std;


int main()
{
    int a[100][100],i,j,s;

 //   scanf("%d",&n);
    for(i=1; i<=5; i++)
    {
//        for(s=1; s<=5-i; s++)
//                printf(" ");

        for(j=1; j<=i; j++)
        {
            if(i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j] + a[i-1][j-1];

           // cout<<i<<" "<<j<<endl;

            printf("%d ",a[i][j]);

        }
        printf("\n");
    }


    return 0;
}
