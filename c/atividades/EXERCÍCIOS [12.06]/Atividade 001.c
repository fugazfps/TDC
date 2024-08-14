// ânghelo
#include <stdio.h>
// ATIVIDADE 001
int main() {

    printf("========================================");
    printf("\n•           SISTEMA ESCOLAR!           •");
    printf("\n•               ânghelo.               •");
    printf("\n========================================\n");

    float banco_notas_alunos[1000][4];
    char  nome_alunos[200],nome_turma[20],fechar;
    int   parar=0;

    printf("Você deseja calcular uma turma? (S/N)  ");
    scanf ("%s",&fechar);
    printf("========================================\n");

    while (fechar != 'N' && fechar != 'n')
    {
        printf("Digite o nome da turma:                ");
        scanf ("%s",&nome_turma);
        printf("Quantos alunos você deseja calcular?   ");
        scanf ("%i",&parar);
        printf("========================================\n");

        float media[parar];
        parar = parar - 1;

        printf("Qual o nome do primeiro aluno? ");
        scanf ("%s",&nome_alunos[0]);
        printf("Digite a primeira nota:        ");
        scanf ("%f",&banco_notas_alunos[0][0]);
        printf("Digite a psegunda nota:        ");
        scanf ("%f",&banco_notas_alunos[0][1]);
        printf("Digite a terceira nota:        ");
        scanf ("%f",&banco_notas_alunos[0][2]);
        printf("Digite a quarta nota:          ");
        scanf ("%f",&banco_notas_alunos[0][3]);
            
        for (int v=1; v<=parar; v++)
        {
            printf("========================================\n");
            printf("Qual o nome do proximo aluno?  ");
            scanf ("%s",&nome_alunos[v]);
            printf("Digite a primeira nota:        ");
            scanf ("%f",&banco_notas_alunos[v][0]);
            printf("Digite a psegunda nota:        ");
            scanf ("%f",&banco_notas_alunos[v][1]);
            printf("Digite a terceira nota:        ");
            scanf ("%f",&banco_notas_alunos[v][2]);
            printf("Digite a quarta nota:          ");
            scanf ("%f",&banco_notas_alunos[v][3]);                       
        }
        printf("========================================\n");
        printf("Dados da turma %s:",nome_turma);
        for (int x=0;x<=parar;x++)
        {
            printf("Aluno:         %s",);
        }
        printf("\n========================================\n");
        printf("Você deseja calcular uma turma? (S/N)  ");
        scanf ("%s",&fechar);
        printf("========================================\n");
    }   
    printf("\nFim.");
    return 0;
}