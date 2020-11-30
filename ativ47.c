#include <stdio.h>
#include <stdlib.h>
/*
47. Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de
conversão é: 𝐾 = 𝐿 ∗ 0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.
*/
int main()
{
    float l, k;

    printf("Digite a massa em libras:\n");
    scanf("%f", &l);

    k = l*0.45;

    printf("A massa em quilogramas eh %.2f.", k);

    return 0;
}
