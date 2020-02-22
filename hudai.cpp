#include<stdio.h>
#include<string.h>

main()
{
    char str[100],bigstr[100]="hahahhah ";

    for( ; ; )
    {
        gets(bigstr);
        gets(str);
        strcat(bigstr,str);

        if(!strcmp(str,"quit"))
            break;
        else if(strlen(bigstr)>=100)
            break;

        printf(bigstr);
    }


    return 0;
}
