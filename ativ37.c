#include <stdio.h>
#include <stdlib.h>
/*
37. Ler uma velocidade em 𝑚/𝑠 (metros por segundo) e apresentá-la convertida em
𝐾𝑚/ℎ (quilômetros por hora). A fórmula de conversão é: 𝐾 = 𝑀 ∗ 3,6 , sendo 𝐾 a velocidade
em 𝑘𝑚/ℎ e 𝑀 em 𝑚/𝑠.
*/
int main()
{
    float k, m;

    printf("Digite a velocidade em m/s:\n");
    scanf("%f", &m);

    k = m*3.6;

    printf("A velocidade eh de %.2f km/h.", k);

    return 0;
}
