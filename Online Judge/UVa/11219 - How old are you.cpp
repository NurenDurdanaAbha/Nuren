#include<stdio.h>
#include<bits/stdc++.h>

int main()
{
    //freopen("output.txt","w",stdout);

    int k=1,t,date1,date2,month1,month2,year1,year2,m;

    scanf("%d",&t);
    while(k<=t)
    {
   // printf("\n");
    scanf("%d/%d/%d",&date1,&month1,&year1);
    scanf("%d/%d/%d",&date2,&month2,&year2);

    int age=year1-year2;

    if(month1<month2)
        age--;
    else if(month1==month2)
    {
        if(date1<date2)
            age--;
    }

    if(age<0)
        printf("Case #%d: Invalid birth date\n",k++);
    else if(age>130)
        printf("Case #%d: Check birth date\n",k++);
    else
        printf("Case #%d: %d\n",k++,age);

    }
    //system("notepad output.txt");

    return 0;
}
