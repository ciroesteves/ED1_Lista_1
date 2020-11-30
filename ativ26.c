#include <stdio.h>
#include <stdlib.h>
/*
26. Fa�a um programa para leia o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em
segundos, de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio (hora,
minuto e segundo) do termino da mesma.
*/
int main()
{
    float horaQuebr, minutoQuebr, segundoTotal, segundoFinal;
    int hora, minuto,  segundo, horaFinal, minutoFinal, segundoDuracao;

    printf("Digite a hora de inicio: ");
    scanf("%d", &hora);
    printf("\nDigite o minuto do inicio: ");
    scanf("%d", &minuto);
    printf("\nDigite os segundos do inicio: ");
    scanf("%d", &segundo);
    printf("\nDigite o tempo de duracao do experimento em segundos: ");
    scanf("%d", &segundoDuracao);

    segundoTotal = segundo+(minuto*60)+(hora*3600);
    segundoTotal = segundoTotal+segundoDuracao;

    horaQuebr = segundoTotal/3600;
    horaFinal = horaQuebr;
    if(horaQuebr>horaFinal){
        minutoQuebr = (horaQuebr-horaFinal)*60;
        minutoFinal = minutoQuebr;
        if(minuto>minutoFinal){
            segundoFinal = ((minutoQuebr-minutoFinal)*60);
        }else{
            segundoFinal = 0;
            minutoFinal = 0;
        }
    }else{
        minutoFinal = 0;
    }
    printf("\nO tempo final eh %d : %d : %.0f.", horaFinal, minutoFinal, segundoFinal);

    return 0;
}
