#include <stdio.h>
#include <stdlib.h>
/*
15. Receba o sal�rio de um funcion�rio, calcule e imprima o valor do novo sal�rio, sabendo que
ele recebeu um aumento de 25%
*/
int main()
{
    float salario, aumento, novoSalario;

    printf("Digite o salario do funcionario:\n");
    scanf("%f", &salario);

    aumento = 0.25;
    novoSalario = salario + (salario * aumento);

    printf("O novo salario eh de %.2f e o acrescimo foi de %.2f", novoSalario, salario*aumento);

    return 0;
}
