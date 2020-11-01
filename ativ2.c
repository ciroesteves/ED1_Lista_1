#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3, soma;

    printf("Digite 3 valores inteiros:\n");
    scanf("%d%d%d", &valor1, &valor2, &valor3);

    soma = valor1+valor2+valor3;

    printf("A soma dos 3 valores eh %d.", soma);

    return 0;
}
