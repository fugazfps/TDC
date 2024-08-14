#include <stdio.h>

// ATIVIDADE 3
int main() {
    int nota=0;
    
    printf("Digite a nota:    ");
    scanf ("%i",&nota);
    
    if (nota <= 59) {printf("\nVocê foi reprovado! nota: %i",nota);}
    else {printf("\nVocê foi aprovado! nota: %i",nota);}
    return 0;
}