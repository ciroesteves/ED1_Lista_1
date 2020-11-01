#include <stdio.h>
#include <stdlib.h>
/*
9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.
*/

int main()
{
    int numAtual, anteTriplo, suceDobro, soma;
    printf("Digite um numero:\n");
    scanf("%d", &numAtual);

    anteTriplo = 3*numAtual + 1;
    suceDobro = 2*numAtual - 1;
    soma = anteTriplo+suceDobro;

    printf("A soma total deu %d.", soma);

    return 0;
}
