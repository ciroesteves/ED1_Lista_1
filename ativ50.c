#include <stdio.h>
#include <stdlib.h>
/*
50. Ler um valor de área em metros quadrados 𝑚2e apresentá-lo convertido em acres. A
fórmula de conversão é: 𝐴 = 𝑀 ∗ 0,000247, sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.
*/
int main()
{
    float m, a;

    printf("Digite a area em m2:\n");
    scanf("%f", &m);

    a = m*0.000247;

    printf("Area de %f acres.", a);

    return 0;
}
