#include <stdio.h>
#include <stdlib.h>
/*
28. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.
*/
int main()
{
    char matricula[7];
    float nota1, nota2, nota3, media;

    printf("Digite a matricula com 6 digitos do aluno:\n");
    fgets(matricula, 7, stdin);
    printf("Digite as notas das 3 provas do aluno:\n");
    scanf("%f\n%f\n%f", &nota1, &nota2, &nota3);

    media = (nota1+nota2+nota3)/3;
    if(media>=60){
        printf("O aluno de matricula %s com media %.2f esta Aprovado!", matricula, media);
    }else{
        printf("O aluno de matricula %s com media %.2f esta Reprovado!", matricula, media);
    }

    return 0;
}
