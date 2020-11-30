#include <stdio.h>
#include <stdlib.h>
/*
23. Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321.
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
