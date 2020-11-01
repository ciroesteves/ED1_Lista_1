#include <stdio.h>
#include <stdlib.h>
/*
10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

int main()
{
    float lado, area;

    printf("Digite a medida do lado do quadrado:\n");
    scanf("%f", &lado);

    area = lado*lado;

    printf("A area do quadrado eh %.2f m2.", area);

    return 0;
}
