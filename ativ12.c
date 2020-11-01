#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
12. Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + 𝑏2.
Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação.
*/

int main()
{
    float a, b, hipotenusa, potA, potB;
    printf("Digite o valor do cateto adjacente:\n");
    scanf("%f", &a);
    printf("Digite o valor do cateto oposto:\n");
    scanf("%f", &b);

    potA = pow(a,2);
    potB = pow(b,2);
    hipotenusa = sqrt(potA+potB);

    printf("A hipotenusa eh %.4f.", hipotenusa);

    return 0;
}
