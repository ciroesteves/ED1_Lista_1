#include <stdio.h>
#include <stdlib.h>
/*
34. Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 𝐾 − 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾 a
temperatura em Kelvin.
*/
int main()
{
    float kelvin, celsius;

    printf("digite a temperatura em graus Kelvin:\n");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("A temperatura em Celsius eh de %f.", celsius);

    return 0;
}
