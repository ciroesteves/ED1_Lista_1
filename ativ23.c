#include <stdio.h>
#include <stdlib.h>
/*
23. Fa�a um programa para ler um n�mero inteiro, positivo de tr�s d�gitos, e gerar outro
n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
N�meroLido = 123
N�meroGerado = 321.
*/
int main()
{
    char num[3];
    int i;

    printf("Digite um numero positivo de 3 digitos:\n");
    fgets(num, 4, stdin);

    for(i=2;i >= 0; i--){
        printf("%c", num[i]);
    }

    return 0;
}
