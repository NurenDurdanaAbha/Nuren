#include<iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,h,m;

   // while(cin>>h1>>m1>>h2>>m2)
    //{
    cin>>h1>>m1>>h2>>m2;

    if(h1==h2 && m1==m2)
    {
        h=24;
        m=0;
    }
    else
    {
        if(m1>m2)
        {
            m=60-(m1-m2);

            if(h1<h2)
            {
                h=h2-h1-1;
            }
            else
            {
                h=24-(h1-h2)-1;
            }
        }
        else
        {
            m=m2-m1;

            if(h1<h2)
            {
                h=h2-h1;
            }
            else if(h1>h2)
            {
                h=24-(h1-h2);
            }
            else
                h=0;
        }
    }


    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
//}


    return 0;
}
