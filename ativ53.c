#include <stdio.h>
#include <stdlib.h>
/*
53. Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em
hectares.
*/
int main()
{
    float h, m;

    printf("Digite a area em hectares:\n");
    scanf("%f", &h);

    m = h*10000;

    printf("Area de %f m2.", m);

    return 0;
}
