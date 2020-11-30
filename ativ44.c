#include <stdio.h>
#include <stdlib.h>
/*
44. Ler um valor de volume em metros cúbicos 𝑚³ e apresentá-lo convertido em litros. A
fórmula de conversão é: 𝐿 = 1000 ∗ 𝑀, sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.
*/
int main()
{
    float l, m;
    printf(";digite o volume em m3:\n");
    scanf("%f", &m);

    l = 1000*m;

    printf("O volume em litros eh %.2f.", l);

    return 0;
}
