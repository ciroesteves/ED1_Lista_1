#include <stdio.h>
#include <stdlib.h>
/*
32. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0/5,0) + 32,0,
sendo 𝐹 a temperatura em Fahrenheit e 𝐶 a temperatura em Celsius.
*/
int main()
{
    float celsius, fahren;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &celsius);

    fahren = ((celsius*9/5) + 32);

    printf("A temperatura em Fahrenheit eh %f", fahren);

    return 0;
}
