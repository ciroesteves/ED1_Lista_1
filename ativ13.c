#include <stdio.h>
#include <stdlib.h>
/*
13. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular é calculado por meio da seguinte fórmula: V = 𝜋 ∗ 𝑟𝑎𝑖𝑜 2∗ alt𝑢𝑟𝑎, onde
𝜋 = 3,141592 .
*/
int main()
{
    float volume, pi = 3.141592, raio, altura;

    printf("Digite a altura do cilindro:\n");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro:\n");
    scanf("%f", &raio);

    volume = pi * (raio*raio) * altura;

    printf("O volume do cilindro eh %f", volume);
    return 0;
}
