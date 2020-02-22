#include<stdio.h>
#include<string.h>

int main()
{
    char name[100], first_name[100], second_name[100], third_name[100];

    gets(first_name);
    gets(second_name);
    gets(third_name);

    strcpy(name, first_name);
    strcat(name, " ");
    strcat(name, second_name);
    strcat(name, " ");
    strcat(name, third_name);

    puts(name);

    return 0;
}
