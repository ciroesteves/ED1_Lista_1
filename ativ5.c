#include <stdio.h>
#include <stdlib.h>

/*5. Efetue a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos tr�s
valores lidos.*/

int main()
{
    float valor1, valor2, valor3, somaquad;

    printf("Digite 3 valores:\n");
    scanf("%f%f%f", &valor1, &valor2, &valor3);

    somaquad = (valor1*valor1)+(valor2*valor2)+(valor3*valor3);

    printf("A soma dos quadrados dos valores digitados � %f", somaquad);


    return 0;
}
