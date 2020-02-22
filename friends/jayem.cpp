#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,avarege,o,sum;

    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    avarege=(n1*2+n2*3+n3*4+n4)/10;

    printf("Media: %.1lf\n",avarege);





    if(avarege>=7.0)
    {
        printf("Aluno aprovado.\n");
    }


     if(avarege>=5 && avarege<=6.9)
      {
        printf("Aluno em exame.\n");


        printf("Nota do exame: ",o);
        scanf("%f",&o);
        sum=(avarege+o)/2;

        printf("Aluno aprovado.\n");
         printf("Media final: %.1lf\n",sum);

        }

        else if (avarege<=4.9)
        {
            printf("Aluno reprovado.\n");


        }


    return 0;
}
