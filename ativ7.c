#include <stdio.h>
#include <stdlib.h>
/*
7. Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente em
d�lares.
*/

int main()
{
    float real, dolar, cot_dolar;
    printf("Digite o valor em Real:\n");
    scanf("%f", &real);
    printf("Digite a cotacao do Dolar:\n");
    scanf("%f", &cot_dolar);

    dolar = real*cot_dolar;

    printf("Total em dolares eh %.4f", dolar);

    return 0;
}
