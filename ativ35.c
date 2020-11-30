#include <stdio.h>
#include <stdlib.h>
/*
35. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: 𝐾 = 𝐶 + 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾
atemperatura em Kelvin.
*/
int main()
{
    float kelvin, celsius;

    printf("digite a temperatura em graus Celsius:\n");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("A temperatura em Kelvin eh de %f.", kelvin);

    return 0;
}
