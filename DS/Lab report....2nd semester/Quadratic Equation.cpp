#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,X1,X2,X;
    int D;

    scanf("%f%f%f",&A,&B,&C);

    D = B*B-4*A*C;

    if(D>0)
    {
        X1 = (-B+sqrt(D))/2*A;
        X2 = (-B-sqrt(D))/2*A;

        printf("X1 = %.3f\nX2 = %.3f\n",X1,X2);
    }

    else if(D==0)
    {
        X = -B/2*A;

        printf("UNIQUE SOLUTION\nX = %.3f\n",X);
    }

    else
    {
        printf("NO REAL SOLUTIONS\n");
    }

    return 0;
}
