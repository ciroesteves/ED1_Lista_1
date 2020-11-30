#include <stdio.h>
#include <stdlib.h>
/*
33. Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 5,0 ∗ (𝐹 − 32,0)/9,0, sendo 𝐶 a temperatura em Celsius e 𝐹 a
temperatura em Fahrenheit.

*/
int main()
{
    float celsius, fahren;

    printf("Digite a temeperatura em Fahrenheit:\n");
    scanf("%f", &fahren);

    celsius = 5 * ((fahren-32)/9);

    printf("A temperatura em Celsius eh de %.2f.", celsius);

    return 0;
}
