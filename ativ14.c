#include <stdio.h>
#include <stdlib.h>
/*
14. Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12%

*/
int main()
{
    float valor, desconto, valorTotal;

    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);

    desconto = 0.12;
    valorTotal = valor - (valor * desconto);

    printf("O valor com desconto eh de %.2f", valorTotal);

    return 0;
}
