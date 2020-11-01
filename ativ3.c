#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, quadrado;

    printf("Digite um numero real: \n");
    scanf("%f", &real);

    quadrado = real*real;

    printf("O quadrado de %f eh %f.", real, quadrado);

    return 0;
}
