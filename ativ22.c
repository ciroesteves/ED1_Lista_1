#include <stdio.h>
#include <stdlib.h>
/*
22. Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela
ASCII.
*/
int main()
{
    char letra;
    int diferenca;

    printf("Digite uma letra em maiusculo:\n");
    scanf("%c", &letra);

    diferenca = 97 - 65;

    if((int)letra >= 65 && (int)letra <= 90){
        printf("Tal letra em minusculo fica:\n%c", letra+diferenca);
    }else{
        printf("Esse nao eh um caractere valido.");
    }

    return 0;
}
