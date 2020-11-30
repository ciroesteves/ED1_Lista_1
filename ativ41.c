#include <stdio.h>
#include <stdlib.h>
/*
41. Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é:
𝐺 = 𝑅 ∗ 180/𝜋 , sendo 𝐺 o ângulo em graus e 𝑅 em radianos e 𝜋 = 3,141592.
*/
int main()
{
    float angGraus, angRad, pi=3.141592;

    printf("Digite o angulo em graus:\n");
    scanf("%f", &angRad);

    angGraus = angRad*180/pi;

    printf("O angulo em graus eh %.2f.", angGraus);

    return 0;
}
