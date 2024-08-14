#include <stdio.h>

// ATIVIDADE 2
int main() {
    int numEscolhido=0;
    char positivoOUnegativo[8];

    printf("Digite um numero:     ");
    scanf ("%i",&numEscolhido);

    if (numEscolhido >= 0) {positivoOUnegativo = "positivo";}
    else {positivoOUnegativo = "negativo";}

    printf("\nO numero %i é %s",numEscolhido,positivoOUnegativo);

    return 0;
}