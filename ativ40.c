#include <stdio.h>
#include <stdlib.h>
/*
40. Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é:
𝑅 = 𝐺 ∗ 𝜋/180 , sendo 𝐺 o ângulo em graus e R em radianos e 𝜋 = 3,141592.
*/
int main()
{
    float angGraus, angRad, pi=3.141592;

    printf("Digite o angulo em graus:\n");
    scanf("%f", &angGraus);

    angRad = angGraus*pi/180;

    printf("O angulo em radiano eh %.2f.", angRad);

    return 0;
}
