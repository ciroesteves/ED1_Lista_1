#include <stdio.h>
#include <stdlib.h>
/*
51. Ler um valor de área em acres e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐴 ∗ 4048,58 , sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.
*/
int main()
{
   float m, a;

    printf("Digite a area em acres:\n");
    scanf("%f", &a);

    m = a*4048.58;

    printf("Area de %f m2.", m);

    return 0;
}
