#include <stdio.h>
#include <stdlib.h>
/*
52. Ler um valor de área em metros quadrados 𝑚² e apresentá-lo convertido em hectares. A
fórmula de conversão é: 𝐻 = 𝑀 ∗ 0,0001, sendo 𝑀 a área em metros quadrados e 𝐻 a área
em hectares.
*/
int main()
{
    float h, m;

    printf("Digite a area em metros quadrados:\n");
    scanf("%f", &m);

    h = m*0.0001;

    printf("Area de %f hectares.", h);

    return 0;
}
