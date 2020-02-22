#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,n,a,d;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    n=(N1*2+N2*3+N3*4+N4*1)/10.0;
    printf("Media: %.1lf\n",n);
    if(n>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(n<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(n>=5.0 && n<=6.9)
    {
        printf("Aluno em exame.\n");
        {
             printf("Nota do exame: ");
            scanf("%lf",&d);
            a=(n+d)/2.0;
            if(a>=5.0)
            {
                printf("Aluno aprovado.\n);
            }
            else if(a<=4.9)
            {
                printf("Aluno reprovado.\n);
            }
        }
        printf("Media final: %.1lf\n",a)
    }
    return 0;
}
