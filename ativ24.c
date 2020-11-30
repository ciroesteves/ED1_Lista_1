#include <stdio.h>
#include <stdlib.h>
/*
24. Leia um número inteiro de 4 dígitos e imprima 1 dígito por linha.
*/
int main()
{
    char num[4];
    int i;

    printf("Digite um numero positivo de 4 digitos:\n");
    fgets(num, 5, stdin);

    for(i=0;i < 4; i++){
        printf("\n%c", num[i]);
    }

    return 0;
}
