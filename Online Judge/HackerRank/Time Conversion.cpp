#include<stdio.h>

int main()
{
    int h,m,s;
    char ss[3];

    scanf("%d:%d:%d",&h,&m,&s);
    gets(ss);

    if(ss[0]=='P')
    {
        if(h==12)
        {
            if(m<10 && s>10)
              printf("%d:0%d:%d",12,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",12,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",12,m,s);
            else
                printf("%d:%d:%d",12,m,s);
        }
        else if(h==1)
        {
            if(m<10 && s>10)
              printf("%d:0%d:%d",13,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",13,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",13,m,s);
            else
                printf("%d:%d:%d",13,m,s);
        }

        else if(h==2)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",14,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",14,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",14,m,s);
            else
                printf("%d:%d:%d",14,m,s);
        }
        else if(h==3)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",15,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",15,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",15,m,s);
            else
                printf("%d:%d:%d",15,m,s);
        }
        else if(h==4)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",16,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",16,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",16,m,s);
            else
                printf("%d:%d:%d",16,m,s);
        }
        else if(h==5)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",17,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",17,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",17,m,s);
            else
                printf("%d:%d:%d",17,m,s);
        }
        else if(h==6)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",18,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",18,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",18,m,s);
            else
                printf("%d:%d:%d",18,m,s);
        }
        else if(h==7)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",19,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",19,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",19,m,s);
            else
                printf("%d:%d:%d",19,m,s);
        }
        else if(h==8)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",20,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",20,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",20,m,s);
            else
                printf("%d:%d:%d",20,m,s);
        }
        else if(h==9)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",21,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",21,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",21,m,s);
            else
                printf("%d:%d:%d",21,m,s);
        }
        else if(h==10)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",22,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",22,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",22,m,s);
            else
                printf("%d:%d:%d",22,m,s);
        }
        else if(h==11)
            {
            if(m<10 && s>10)
              printf("%d:0%d:%d",23,m,s);
            else if(s<10 && m>10)
              printf("%d:%d:0%d",23,m,s);
            else if(m<10 && s<10)
              printf("%d:0%d:0%d",23,m,s);
            else
                printf("%d:%d:%d",23,m,s);
        }
    }

    else
        {
            if(h==12)
            {
                if(m<10 && s>10)
                    printf("00:0%d:%d",m,s);
                else if(s<10 && m>10)
                    printf("00:%d:0%d",m,s);
                else if(m<10 && s<10)
                    printf("00:0%d:0%d",m,s);
                else
                    printf("00:%d:%d",m,s);
            }
            else if(h<10)
            {
                if(m<10 && s>10)
                    printf("0%d:0%d:%d",h,m,s);
                else if(s<10 && m>10)
                    printf("0%d:%d:0%d",h,m,s);
                else if(m<10 && s<10)
                    printf("0%d:0%d:0%d",h,m,s);
                else
                    printf("0%d:%d:%d",h,m,s);
            }
            else
            {
                if(m<10 && s>10)
                    printf("%d:0%d:%d",h,m,s);
                else if(s<10 && m>10)
                    printf("%d:%d:0%d",h,m,s);
                else if(m<10 && s<10)
                    printf("%d:0%d:0%d",h,m,s);
                else
                    printf("%d:%d:%d",h,m,s);
            }

        }


    return 0;
}
