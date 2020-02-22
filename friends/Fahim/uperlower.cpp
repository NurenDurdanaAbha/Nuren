#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{

    char s[1000];

    while(1)
    {
        gets(s);
        int count=0, count2=0;

        int l=strlen(s);
        for(int i=0; i<l;i++)
        {
            if(isupper(s[i]))
                count++;

            if(islower(s[i]))
                count2++;
        }

    cout<<"Number of Capital Letters: "<<count<<endl;
    cout<<"Number of Small Letters: "<<count2<<endl<<endl;
    }



    return 0;
}
