#include <stdio.h>
#include <stdlib.h>
/*
42. Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros. A
fórmula de conversão é: 𝐶 = 𝑃 ∗ 2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.
*/
int main()
{
    float p, c;

    printf("Digite o comprimento em polegadas:\n");
    scanf("%f", &p);

    c = p*2.54;

    printf("O comprimento em centimetros eh %f", c);

    return 0;
}
