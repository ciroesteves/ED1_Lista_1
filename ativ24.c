#include <stdio.h>
#include <stdlib.h>
/*
24. Leia um n�mero inteiro de 4 d�gitos e imprima 1 d�gito por linha.
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
