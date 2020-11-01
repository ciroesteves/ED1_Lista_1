#include <stdio.h>
#include <stdlib.h>
/*
6. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/

int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("digite as 4 notas\n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("A media das notas eh %f.", media);

    return 0;
}
