#include <stdio.h>
#include <stdlib.h>
/*
48. Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula
de conversão é: 𝑀 = 0,91 ∗ 𝐽 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.
*/
int main()
{
    float m, j;

    printf("Digite o comprimento em jardas:\n");
    scanf("%f", &j);

    m = 0.91*j;

    printf("O comprimento em metros eh %.2f.", m);

    return 0;
}
