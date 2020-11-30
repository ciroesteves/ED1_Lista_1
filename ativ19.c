#include <stdio.h>
#include <stdlib.h>
/*
19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.

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
