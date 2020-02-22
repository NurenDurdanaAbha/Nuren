#include <stdio.h>

int main()
{
    double n;
    int  n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;

    scanf("%lf", &n);

       int notas = n;
      int modas = (n-notas)*100;

    n100 = notas/100;

    notas = notas%100;

    n50 = notas/50;

    notas = notas%50;

    n20 = notas/20;

    notas = notas%20;

    n10 = notas/10;

    notas = notas%10;

    n5 = notas/5;

    notas = notas%5;

    n2 = notas/2;

    notas = notas%2;

    m1 = notas/1;

    notas = notas%1;

    m50 = modas/50;

    modas = modas%50;

    m25 = modas/25;

    modas = modas%25;

    m10 = modas/10;

    modas = modas%10;

    m05 = modas/05;

    modas = modas%05;

    m01 = modas/01;

    modas = modas%01;

    printf("NOTAS: \n%d nota(s) de R$ 100.00 \n%d nota(s) de R$ 50.00 \n%d nota(s) de R$ 20.00 \n%d nota(s) de R$ 10.00 \n%d nota(s) de R$ 5.00 \n%d nota(s) de R$ 2.00 \nMOEDAS: \n%d moeda(s) de R$ 1.00 \n%d moeda(s) de R$ 0.50 \n%d moeda(s) de R$ 0.25 \n%d moeda(s) de R$ 0.10 \n%d moeda(s) de R$ 0.05 \n%d moeda(s) de R$ 0.01",n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01);

	return 0;

}
