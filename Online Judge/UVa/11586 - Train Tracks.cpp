#include<stdio.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,test;
    char s[1000000];

       scanf("%d\n",&test);
    while(test--)
    {
        gets(s);

        int countM=0, countF=0;
        i=0;
    while(i<strlen(s))
    {
            if(s[i]=='M')
                countM++;
            if(s[i]=='F')
                countF++;

            i++;
    }


    if(countM!=countF || countM==1 && countF==1)
    {
        printf("NO LOOP\n");
    }

        else
        {
            printf("LOOP\n");
        }
    }

    return 0;
}
