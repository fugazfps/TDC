// ânghelo
#include <stdio.h>
// ATIVIDADE 004
int main() {

    float valor_normal=0.0,desconto_STQ=0.0,valor_descontado=0.0,desconto_musica=0.0;
    int   dia_semana=0,musica_aovivo=0;  

    printf("========================================");
    printf("\n•           PREÇO DANCETERIA           •");
    printf("\n•               ânghelo.               •");
    printf("\n========================================\n\n");

    printf("Qual o valor normal?          R$");
    scanf ("%f",&valor_normal);
    printf("Qual é o dia da semana?       ");
    scanf ("%i",&dia_semana);
    printf("Tem show ao vivo? (1/2)       ");
    scanf ("%i",&musica_aovivo);

    desconto_STQ   = valor_normal + desconto_STQ;

    if (dia_semana == 2 || dia_semana == 3 || dia_semana == 5) {desconto_STQ = desconto_STQ * 0.25;}
    if (musica_aovivo == 1) {desconto_musica = desconto_STQ * 0.15;}
    
    valor_descontado = valor_normal - desconto_STQ;
    valor_descontado = valor_descontado - desconto_musica;

    printf("\nDados do dia:");
    printf("\n\nValor normal:               R$%f",valor_normal);
    printf("\nDesconto dia da semana:     R$%f",desconto_STQ);
    printf("\nDesconto musica ao vivo:    R$%f",desconto_musica);
    printf("\nValor descontado:           R$%f",valor_descontado);
    return 0;
}