#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,D;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A==0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    D=B*B-4*A*C;
    if(D<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-B+sqrt(D))/(2.0*A),(-B-sqrt(D))/(2.0*A));
    }
    return 0;
}
