// ANGHELO
#include <stdio.h>

// ATIVIDADE 5
int main() {
    
    int notaProva[3],media=0;
    
    printf("========================================");
    printf("\n•     CALCULADOR DE MEDIA v0.000.1     •");
    printf("\n•               ânghelo.               •");
    printf("\n========================================");
    printf("\n\n\n");
    printf("Digite a nota da primeira prova:   ");
    scanf ("%i",&notaProva[0]);
    printf("Digite a nota da segunda prova:    ");
    scanf ("%i",&notaProva[1]);
    printf("Digite a nota da terceira prova:   ");
    scanf ("%i",&notaProva[2]);

    media = (notaProva[0]+notaProva[1]+notaProva[2]) / 3;

    if (media <= 59 && media >= 0) {printf("\nREPROVADO!\nmedia:   %i",media);}
    if (media >= 60 && media <= 100) {printf("\nAPROVADO!\nmedia:   %i",media);}
    else {printf("\nStatus desconhecido.");}

    return 0;
}