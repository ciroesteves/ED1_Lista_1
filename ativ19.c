#include <stdio.h>
#include <stdlib.h>
/*
19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.

*/
int main()
{
    float salarioBase, salarioTotal, gratif = 0.05, imposto = 0.07, valorgratif, valorImposto;

    printf("Digite o salario-base do funcionario:\n");
    scanf("%f", &salarioBase);

    valorgratif = salarioBase * gratif;
    valorImposto = salarioBase * imposto;
    salarioTotal = salarioBase + valorgratif - valorImposto;

    printf("O valor a ser pago ao funcionario eh de %.2f", salarioTotal);

    return 0;
}
