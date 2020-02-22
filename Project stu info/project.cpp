#include<stdio.h>

int main()
{
    int roll,n;

    printf("\t\t\t\t***STUDENT INFORMATION***\n");

    while(1)
    {
         printf("\n\nEnter the roll number: ");
        scanf("%d",&roll);

        if(roll==0)
        {
            printf("\n\nThank you for searching.....\n");
            break;
        }

    printf("\nYou are searching for the information of roll %d...\n\n",roll);

    printf("What do you want to know about this student?\n");
    printf("1.Personal Information...\n");
    printf("2.Family Information...\n");
    printf("3.Study Information...\n");
    printf("4.Results...\n\n");
    printf("If you have found your information, press 0(zero) OTHERWISE press 1 t0 4\n");

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            printf("If you want to search another students information, Enter the roll OTHERWISE Enter 0(zero)\n");
            break;
        }

    //Fahim
    if(roll==123)
    {
        if(n==1)
        {
        printf("\n");
        printf("Name           : Fahim Faysal Nasif\n");
        printf("Age            : 19\n");
        printf("Sex            : Male\n");
        printf("Blood Group    : O+\n");
        printf("Date of Birth  : March 24,1998\n");
        printf("Mobile No.     : 01521431178\n");
        printf("E-mail         : ffnasif@gmail.com\n");
        printf("Address        : 8-D, Millat Tower, Mirhazirbag, Jatrabari, Dhaka-1204\n\n");
        }

        else if(n==2)
        {
            printf("\n");
            printf("Name           : Fahim Faysal Nasif\n");
            printf("Father's name  : Hamidur Rahman\n");
            printf("Occupation     : Businessman\n");
            printf("Mother's name  : Shmima Akter\n");
            printf("Occupation     : House wife\n");
            printf("Sibling's name : Sister   : Amatut Tasfin Samia\n");
            printf("\t\t Brothers : Abu Saleh Nayeem, Atique Muzahid Nafis\n\n");
        }

        else if(n==3)
        {
            printf("\n");
            printf("Name          : Fahim Faysal Nasif\n");
            printf("JDC           : done from Tamirul Millat Kamil Madrasah\n");
            printf("SSC(Science)  : done from Tamirul Millat Kamil Madrasah\n");
            printf("HSC(Science)  : done from Engineering University School & College\n");
            printf("Honours(CSE)  : now studing in City College\n\n");
        }

        else if(n==4)
        {
            printf("\n");
            printf("Name       : Fahim Faysal Nasif\n");
            printf("JDC result : GPA- 4.24, Grade- A-\n");
            printf("SSC result : GPA- 5.00, Grade- A+\n");
            printf("HSC result : GPA- 4.42, Grade- A\n\n");
        }
    }

    //Nuren
    if(roll == 124)
    {
        if(n==1)
        {
        printf("\n");
        printf("Name           : Nuren Durdana Abha\n");
        printf("Age            : 20\n");
        printf("Sex            : Female\n");
        printf("Blood Group    : O+\n");
        printf("Date of Birth  : November 4,1997\n");
        printf("Mobile No.     : 01842528318\n");
        printf("E-mail         : nurenabha@gmail.com\n");
        printf("Address        : 255/1 West Manikdee, Dhaka Cantonment, Dhaka-1206\n\n");
        }

        else if(n==2)
        {
            printf("\n");
            printf("Name           :  Nuren Durdana Abha\n");
            printf("Father's name  : S.M. Tofazzal Hossain\n");
            printf("Occupation     : Civil Engineer\n");
            printf("Mother's name  : Mosammat Hazera Akter\n");
            printf("Occupation     : House wife\n");
            printf("Sibling's name : Rubaiya Durdana Subha\n\n");
        }

        else if(n==3)
        {
            printf("\n");
            printf("Name          : Nuren Durdana Abha\n");
            printf("JSC           : done from Shaheed Bir Utta Lt. Anwar Girls' College\n");
            printf("SSC(Science)  : done from Shaheed Bir Utta Lt. Anwar Girls' College\n");
            printf("HSC(Science)  : done from Shaheed Bir Utta Lt. Anwar Girls' College\n");
            printf("Honours(CSE)  : now studing in City College\n\n");
        }

        else if(n==4)
        {
            printf("\n");
            printf("Name       : Nuren Durdana Abha\n");
            printf("JSC result : GPA- 5.00, Grade- A+\n");
            printf("SSC result : GPA- 5.00, Grade- A+\n");
            printf("HSC result : GPA- 4.83, Grade- A\n\n");
        }
    }

    //Jubba
    if(roll==144)
    {
        if(n==1)
        {
        printf("\n");
        printf("Name           : Md. Najmush Jubayed\n");
        printf("Age            : 19\n");
        printf("Sex            : Male\n");
        printf("Blood Group    : O+\n");
        printf("Date of Birth  : July 3,1998\n");
        printf("Mobile No.     : 01777640655\n");
        printf("E-mail         : jubayedsessence@gmail.com\n");
        printf("Address        : House no.-19, Road no.-10, Sector-14, Uttara, Dhaka-1230\n\n");
        }

        else if(n==2)
        {
            printf("\n");
            printf("Name           : Md. Najmush Jubayed\n");
            printf("Father's name  : Mohammad Rezaul Karim Reza\n");
            printf("Occupation     : Businessman\n");
            printf("Mother's name  : Aferina Anjum Rina\n");
            printf("Occupation     : House wife\n");
            printf("Sibling's name : Nazmush Shakayet\n\n");
        }

        else if(n==3)
        {
            printf("\n");
            printf("Name          : Md. Najmush Jubayed\n");
            printf("JSC           : done from I.E.S. school and College\n");
            printf("SSC(Science)  : done from I.E.S. school and College\n");
            printf("HSC(Science)  : done from I.E.S. school and College\n");
            printf("Honours(CSE)  : now studing in City College\n\n");
        }

        else if(n==4)
        {
            printf("\n");
            printf("Name       : Md. Najmush Jubayed\n");
            printf("JSC result : GPA- 4.07, Grade- A-\n");
            printf("SSC result : GPA- 4.88, Grade- A\n");
            printf("HSC result : GPA- 4.56, Grade- A\n\n");
        }

    }
    }

    }

    return 0;
}
