#include <stdio.h>
#include <stdlib.h>
/*
30. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.
*/
int main()
{
    float aposta1, aposta2, aposta3, premioTotal, premio1, premio2, premio3, apostas;

    printf("Digite o valor da aposta do primeiro, segundo e terceiro amigo, respectivamente:\n");
    scanf("%f%f%f", &aposta1, &aposta2, &aposta3);
    printf("Digite o valor do premio total:\n");
    scanf("%f", &premioTotal);

    apostas = aposta1+aposta2+aposta3;
    premio1 = (aposta1/apostas)*premioTotal;
    premio2 = (aposta2/apostas)*premioTotal;
    premio3 = (aposta3/apostas)*premioTotal;

    printf("O primeiro vai receber %.2f.\nO segundo vai receber %.2f.\nO terceiro vai receber %.2f.", premio1, premio2, premio3);

    return 0;
}
