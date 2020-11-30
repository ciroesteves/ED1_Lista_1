#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
29. Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0, 0).
*/
int main()
{
    int x, y;
    float distancia, aux;

    printf("Digite a coordenada x:\n");
    scanf("%d", &x);
    printf("Digite a coordenada y:\n");
    scanf("%d", &y);

    aux = (x*x)+(y*y);''
    distancia = sqrt(aux);

    printf("%.2f", distancia);

    return 0;
}
