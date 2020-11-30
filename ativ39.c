#include <stdio.h>
#include <stdlib.h>
/*
39. Ler uma distância em quilômetros e apresentá-la convertida em milhas. A fórmula de
conversão é: 𝑀 = 𝐾/1,61 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.
*/
int main()
{
    float k, m;

    printf("Digite a distancia em km:\n");
    scanf("%f", &k);

    m = k/1.61;

    printf("A distancia eh de %f milhas.", m);

    return 0;
}
