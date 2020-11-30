#include <stdio.h>
#include <stdlib.h>
/*
46. Ler um valor de massa em quilogramas e apresentá-lo convertido em libras. A fórmula de
conversão é: 𝐿 = 𝐾/0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.
*/
int main()
{
    float l, k;

    printf("Digite a massa em quilogramas:\n");
    scanf("%f", &k);

    l = k/0.45;

    printf("A massa em libras eh %.2f.", l);s

    return 0;
}
