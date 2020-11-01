#include <stdio.h>
#include <stdlib.h>
/*
8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main()
{
    int numAtual, numAnte, numSuce;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numAtual);

    numAnte = numAtual-1;
    numSuce = numAtual+1;

    printf("Em relacao ao %d, o antecessor eh %d e o sucessor eh %d.", numAtual, numAnte, numSuce);

    return 0;
}
