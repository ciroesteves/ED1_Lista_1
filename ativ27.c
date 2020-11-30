#include <stdio.h>
#include <stdlib.h>
/*
27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.

*/
int main()
{
    int anoAtual, idade, anoNasc;

    printf("Digite a idade que a pessoa completa esse ano: ");
    scanf("%d", &idade);

    anoAtual = 2020;
    anoNasc = anoAtual-idade;

    printf("\nA pessoa nasceu em %d.", anoNasc);

    return 0;
}
