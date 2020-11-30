#include <stdio.h>
#include <stdlib.h>
/*
16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receberá 46%;
 O segundo receberá 32%;
 O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
int main()
{
    float premio = 780000.00, primeiro, segundo, terceiro, divPrimeiro = 0.46, divSegundo = 0.32;

    primeiro = premio * divPrimeiro;
    segundo = premio * divSegundo;
    terceiro = premio - primeiro - segundo;

    printf("O primeiro ganhou %.2f.\nO segundo ganhou %.2f.\nO terceiro ganhou %.2f.", primeiro, segundo, terceiro);

    return 0;
}
