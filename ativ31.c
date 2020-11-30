#include <stdio.h>
#include <stdlib.h>
/*
31. Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem
como o preço do metro do arame 𝑝, então fornecer como saída o custo para cercar este
mesmo terreno.
*/
int main()
{
    float c, l, p, perimetro, custoTotal;

    printf("Digite o comprimento e largura do terreno em metros:\n");
    scanf("%f%f", &c, &l);
    printf("Digite o preco do arame por metro:");
    scanf("%f", &p);

    perimetro = 2*c+2*l;
    custoTotal = perimetro*p;

    printf("O custo da cerca sera: %f.", custoTotal);

    return 0;
}
