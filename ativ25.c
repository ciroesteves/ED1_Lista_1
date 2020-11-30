#include <stdio.h>
#include <stdlib.h>
/*
25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/
int main()
{
    int segundos;
    float horas, minutos;

    printf("Digite quantos segundos que converter:\n");
    scanf("%d", &segundos);

    minutos = segundos/60;
    horas = minutos/60;

    printf("%.2f horas.\n%.2f minutos.\n%d segundos.", horas, minutos, segundos);

    return 0;
}
