#include<stdio.h>
#include<string.h>

int main()
{
    int test,length1,length2,count1,count2,count3;
    char realName[100],gameName[100],ch;

    scanf("%d%c",&test,&ch);
    while(test--)
    {
        length1=0;
        length2=0;

        scanf("%s",&realName);
        length1=strlen(realName);

        scanf("%s",&gameName);
        length2=strlen(gameName);

        if(length1!=length2)
        {
            printf("No\n");
            continue;
        }

        else
        {
            count1=0;
            count2=0;
            count3=0;
            for(int i=0; i<length1; i++)
            {
                if((realName[i]=='a' || realName[i]=='e' || realName[i]=='i' || realName[i]=='o' || realName[i]=='u') && (gameName[i]=='a' || gameName[i]=='e' || gameName[i]=='i' || gameName[i]=='o' || gameName[i]=='u'))
                    count1++;

                if((realName[i]=='b' && gameName[i]!='b') || (realName[i]=='c' && gameName[i]!='c') || (realName[i]=='d' && gameName[i]!='d') || (realName[i]=='f' && gameName[i]!='f') || (realName[i]=='g' && gameName[i]!='g'))
                    count2++;
                else if((realName[i]=='h' && gameName[i]!='h') || (realName[i]=='j' && gameName[i]!='j') || (realName[i]=='k' && gameName[i]!='k') || (realName[i]=='l' && gameName[i]!='l') || (realName[i]=='m' && gameName[i]!='m'))
                    count2++;
                else if((realName[i]=='n' && gameName[i]!='n') || (realName[i]=='p' && gameName[i]!='p') || (realName[i]=='q' && gameName[i]!='q') || (realName[i]=='r' && gameName[i]!='r') || (realName[i]=='s' && gameName[i]!='s'))
                    count2++;
                else if((realName[i]=='t' && gameName[i]!='t') || (realName[i]=='v' && gameName[i]!='v') || (realName[i]=='w' && gameName[i]!='w') || (realName[i]=='x' && gameName[i]!='x') || (realName[i]=='y' && gameName[i]!='y')|| (realName[i]=='z' && gameName[i]!='z'))
                    count2++;

               if((realName[i]=='a' || realName[i]=='e' || realName[i]=='i' || realName[i]=='o' || realName[i]=='u') && !(gameName[i]=='a' || gameName[i]=='e' || gameName[i]=='i' || gameName[i]=='o' || gameName[i]=='u'))
                    count3++;


            }
        }


        if(count2!=0 || count3!=0)
            printf("No\n");
        else if(count1!=0 || count2==0)
            printf("Yes\n");

    }


    return 0;
}
