#include <stdio.h>
#include <stdlib.h>
/*
17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda.

*/
int main()
{
    int diasTrab;
    float salarioDia = 30.00, IR = 0.08, salario;

    printf("Digite os dias trabalhados:\n");
    scanf("%d", &diasTrab);

    salario = (salarioDia * diasTrab);
    salario = salario - (salario * IR);

    printf("O salario eh de %.2f", salario);

    return 0;
}
