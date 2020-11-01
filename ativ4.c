#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, quinta_parte;

    printf("Digite um numero real:\n");
    scanf("%f", &real);

    quinta_parte = real/5;

    printf("A quinta parte de %f eh %f.", real, quinta_parte);
    return 0;
}
