#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("output.txt","w",stdout);

    char s1[30],s2[30];
    int len1, len2, sum1, sum2,i, sum, summ,r1,r2;
    float result1,result2;

    while(cin.getline(s1,30))
    {
//        cout<<"2.sum: "<<sum<<endl;
//        cout<<"2.summ: "<<summ<<endl;
        len1=strlen(s1);
       // cout<<"len1: "<<len1<<endl;
        sum1=0;

        for(i=0; i<len1; i++)
        {
           if(s1[i]== 'A' || s1[i]== 'a')
            sum1 = sum1 + 1;
           else if(s1[i]== 'B' || s1[i]== 'b')
            sum1 = sum1 + 2;
           else if(s1[i]== 'C' || s1[i]== 'c')
            sum1 = sum1 + 3;
           else if(s1[i]== 'D' || s1[i]== 'd')
            sum1 = sum1 + 4;
           else if(s1[i]== 'E' || s1[i]== 'e')
            sum1 = sum1 + 5;
           else if(s1[i]== 'F' || s1[i]== 'f')
            sum1 = sum1 + 6;
           else if(s1[i]== 'G' || s1[i]== 'g')
            sum1 = sum1 + 7;
           else if(s1[i]== 'H' || s1[i]== 'h')
            sum1 = sum1 + 8;
           else if(s1[i]== 'I' || s1[i]== 'i')
            sum1 = sum1 + 9;
           else if(s1[i]== 'J' || s1[i]== 'j')
            sum1 = sum1 + 10;
           else if(s1[i]== 'K' || s1[i]== 'k')
            sum1 = sum1 + 11;
           else if(s1[i]== 'L' || s1[i]== 'l')
            sum1 = sum1 + 12;
           else if(s1[i]== 'M' || s1[i]== 'm')
            sum1 = sum1 + 13;
           else if(s1[i]== 'N' || s1[i]== 'n')
            sum1 = sum1 + 14;
           else if(s1[i]== 'O' || s1[i]== 'o')
            sum1 = sum1 + 15;
           else if(s1[i]== 'P' || s1[i]== 'p')
            sum1 = sum1 + 16;
           else if(s1[i]== 'Q' || s1[i]== 'q')
            sum1 = sum1 + 17;
           else if(s1[i]== 'R' || s1[i]== 'r')
            sum1 = sum1 + 18;
           else if(s1[i]== 'S' || s1[i]== 's')
            sum1 = sum1 + 19;
           else if(s1[i]== 'T' || s1[i]== 't')
            sum1 = sum1 + 20;
           else if(s1[i]== 'U' || s1[i]== 'u')
            sum1 = sum1 + 21;
           else if(s1[i]== 'V' || s1[i]== 'v')
            sum1 = sum1 + 22;
           else if(s1[i]== 'W' || s1[i]== 'w')
            sum1 = sum1 + 23;
           else if(s1[i]== 'X' || s1[i]== 'x')
            sum1 = sum1 + 24;
           else if(s1[i]== 'Y' || s1[i]== 'y')
            sum1 = sum1 + 25;
           else if(s1[i]== 'Z' || s1[i]== 'z')
            sum1 = sum1 + 26;
           else
            sum1 = sum1 + 0;
        }
      //  cout<<sum1<<endl;


       while(sum>9)
       {
     // m1:
           sum=0;
           while(sum1!=0)
            {
              r1=sum1%10;
              sum1=sum1/10;
              sum=sum+r1;
            }
         //   cout<<"{sum: "<<sum<<endl;
              if(sum>9)
              {
                 sum1=sum;
                 //goto m1;
              }
//              else
//                break;
        }

       // cout<<"result: "<<sum<<endl;

        //getchar();
       cin.getline(s2,30);
        len2=strlen(s2);
       // cout<<"len2: "<<len2<<endl;
        sum2=0;

        for(i=0; i<len2; i++)
        {
           if(s2[i]== 'A' || s2[i]== 'a')
            sum2 = sum2 + 1;
           else if(s2[i]== 'B' || s2[i]== 'b')
            sum2 = sum2 + 2;
           else if(s2[i]== 'C' || s2[i]== 'c')
            sum2 = sum2 + 3;
           else if(s2[i]== 'D' || s2[i]== 'd')
            sum2 = sum2 + 4;
           else if(s2[i]== 'E' || s2[i]== 'e')
            sum2 = sum2 + 5;
           else if(s2[i]== 'F' || s2[i]== 'f')
            sum2 = sum2 + 6;
           else if(s2[i]== 'G' || s2[i]== 'g')
            sum2 = sum2 + 7;
           else if(s2[i]== 'H' || s2[i]== 'h')
            sum2 = sum2 + 8;
           else if(s2[i]== 'I' || s2[i]== 'i')
            sum2 = sum2 + 9;
           else if(s2[i]== 'J' || s2[i]== 'j')
            sum2 = sum2 + 10;
           else if(s2[i]== 'K' || s2[i]== 'k')
            sum2 = sum2 + 11;
           else if(s2[i]== 'L' || s2[i]== 'l')
            sum2 = sum2 + 12;
           else if(s2[i]== 'M' || s2[i]== 'm')
            sum2 = sum2 + 13;
           else if(s2[i]== 'N' || s2[i]== 'n')
            sum2 = sum2 + 14;
           else if(s2[i]== 'O' || s2[i]== 'o')
            sum2 = sum2 + 15;
           else if(s2[i]== 'P' || s2[i]== 'p')
            sum2 = sum2 + 16;
           else if(s2[i]== 'Q' || s2[i]== 'q')
            sum2 = sum2 + 17;
           else if(s2[i]== 'R' || s2[i]== 'r')
            sum2 = sum2 + 18;
           else if(s2[i]== 'S' || s2[i]== 's')
            sum2 = sum2 + 19;
           else if(s2[i]== 'T' || s2[i]== 't')
            sum2 = sum2 + 20;
           else if(s2[i]== 'U' || s2[i]== 'u')
            sum2 = sum2 + 21;
           else if(s2[i]== 'V' || s2[i]== 'v')
            sum2 = sum1 + 22;
           else if(s2[i]== 'W' || s2[i]== 'w')
            sum2 = sum2 + 23;
           else if(s2[i]== 'X' || s2[i]== 'x')
            sum2 = sum2 + 24;
           else if(s1[i]== 'Y' || s2[i]== 'y')
            sum2 = sum2 + 25;
           else if(s1[i]== 'Z' || s2[i]== 'z')
            sum2 = sum2 + 26;
           else
            sum2 = sum2 + 0;
        }
      //  cout<<sum2<<endl;

       while(summ>9)
       {
//m2:
           summ=0;
           while(sum2!=0)
            {
              r2=sum2%10;
              sum2=sum2/10;
              summ=summ+r2;
            }
       //     cout<<"{summ: "<<summ<<endl;
              if(summ>9)
              {
                sum2=summ;
               // goto m2;
              }
//              else
//                break;
        }
       // cout<<"result: "<<summ<<endl;

       // cout<<(float)sum/summ<<endl<<(float)summ/sum<<endl;
       char c='%';
        if(sum>summ)
        {
            result1=(float)summ/sum;
            printf("%.2f %c\n",result1*100.0,c);
        }
        else
        {
           result2=(float)sum/summ;
           printf("%.2f %c\n",result2*100.0,c);
        }
        sum=10;
        summ=10;
    }

   // system("notepad output.txt");

    return 0;
}
