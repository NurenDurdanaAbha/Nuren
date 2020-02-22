#include<stdio.h>
#include<string.h>
int main()
{
    char FirstName[1000],LastName[1000],FullName[1000];
    printf("\t\tRegistration in FaceBook\n\n");
    printf("Enter first name: ");
    gets (FirstName);
    printf("Enter last name: ");
    gets (LastName);
    strcat(FirstName," ");
    strcat(FirstName,LastName);
    puts(FirstName);
    return 0;
}
