#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
21. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo
a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo,
sem se preocupar com a altura do usu�rio.
*/
int main()
{
    float escada, degrau, numDegrau;
    int aux;


    printf("Digite a alltura dos degraus da escada:\n");
    scanf("%f", &degrau);
    printf("Digite a altura que deseja alcan�ar subindo a escada:\n");
    scanf("%f", &escada);

    numDegrau = escada / degrau;
    aux = numDegrau;
    if(numDegrau == aux){
        printf("Para alcancar essa altura deve subir no minimo %d degraus", aux);
    }else{
        printf("Para alcancar essa altura deve subir no minimo %d degraus", aux+1);
    }

    return 0;
}
