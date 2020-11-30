#include <stdio.h>
#include <stdlib.h>
/*
49. Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula
de conversão é: 𝐽 = 𝑀/0,91 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.
*/
int main()
{
    float m, j;

    printf("Digite o comprimento em metros:\n");
    scanf("%f", &m);

    j = m/0.91;

    printf("O comprimento em jardas eh %.2f.", j);

    return 0;
}
