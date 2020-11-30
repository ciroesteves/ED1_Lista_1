#include <stdio.h>
#include <stdlib.h>
/*
38. Ler uma distância em milhas e apresentá-la convertida em quilômetros. A fórmula de
conversão é: 𝐾 = 1,61 ∗ 𝑀 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.
*/
int main()
{
    float k, m;

    printf("Digite a distancia em milhas:\n");
    scanf("%f", &m);

    k = 1.61*m;

    printf("A distancia eh de %.2f km.", k);

    return 0;
}
