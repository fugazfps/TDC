// ANGHELO
#include <stdio.h>

// ATIVIDADE 8
int main() {

    int numero_escolhido=0,c1=1,c2=1,resultado=0,tudo=0,media=0;
    
    printf("========================================");
    printf("\n•               ânghelo.               •");
    printf("\n========================================");

    printf("\n\nDigite um numero:    ");
    scanf ("%i",&numero_escolhido);

    for (int v=2; v<=numero_escolhido; v++)
    {
        resultado = c1+c2;
        printf("\n%i + %i = %i",c1,c2,resultado);
        c1 = resultado; 
        tudo = tudo+resultado;
    }
    media = tudo / numero_escolhido;
    printf("\n\nSoma de tudo:    %i",tudo);
    printf("\nMedia:             %i",media);
    return 0;
}