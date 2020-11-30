#include <stdio.h>
#include <stdlib.h>
/*
18. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês, e imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
valor calculado.

*/
int main()
{
    float salarioHora, numHoras, acresc = 0.1, salario;

    printf("Digite o valor da hora de trabalho em reais:\n");
    scanf("%f", &salarioHora);
    printf("Digite o numero de horas trabalhadas:\n");
    scanf("%f", &numHoras);

    salario = salarioHora * numHoras;
    salario = salario + (salario * acresc);

    printf("O valor a ser pago ao funcionario eh de %.2f reais.", salario);

    return 0;
}
