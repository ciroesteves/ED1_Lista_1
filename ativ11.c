#include <stdio.h>
#include <stdlib.h>
/*
11. Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
resultado dessa operação. A área do círculo é 𝜋 ∗ 𝑟𝑎𝑖𝑜², considere 𝜋 = 3,141592 .
*/
int main()
{
    float raio, area, pi = 3.141592;

    printf("Digite o valor do raio do circulo:\n");
    scanf("%f", &raio);

    area = pi * raio*raio;

    printf("A area do circulo em questao eh %f m2.", area);
    return 0;
}
