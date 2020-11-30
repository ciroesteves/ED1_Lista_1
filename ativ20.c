#include <stdio.h>
#include <stdlib.h>
/*
20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
 O total a pagar com desconto de 10%;
 O valor de cada parcela, no parcelamento de 3 x sem juros;
 A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
 A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)

*/
int main()
{
    float valorLido, totalDesconto, desconto = 0.1, parcela, comisVista, comisParcela;

    printf("Digite o valor total lido:\n");
    scanf("%f", &valorLido);

    //total a pagar com desconto de 10%.
    totalDesconto = valorLido - (valorLido * desconto);
    //valor de cada parcela 3x sem juros.
    parcela = valorLido/3;
    //comissao vendedor a vista 5% no valor descontado.
    comisVista = totalDesconto * 0.05;
    //comissao vendedor parcelado 5% valor total.
    comisParcela = valorLido * 0.05;

    printf("O valor a vista eh %.2f.\nO valor parcelado eh 3x de %.2f sem juros.\nA comissao a vista eh %.2f.\nA comissao parcelado eh %.2f.", totalDesconto, parcela, comisVista, comisParcela);


    return 0;
}
