#include <stdio.h>
#include <stdlib.h>
/*
36. Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la convertida em 𝑚/𝑠
(metros por segundo). A fórmula de conversão é: 𝑀 = 𝑘/3,6, sendo 𝐾 a velocidade em 𝑘𝑚/ℎ
e 𝑀 em m/s.
*/
int main()
{
    float kmh, ms;

    printf("Digite a velocidade em km/h:\n");
    scanf("%f", &kmh);

    ms = kmh/3.6;

    printf("A velocidade em m/s eh %.2f", ms);

    return 0;
}
