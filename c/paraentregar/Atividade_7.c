// ANGHELO
#include <stdio.h>

// ATIVIDADE 7
int main() {

    int numero_escolhido=0,c1=1,c2=1,resultado;
    
    printf("========================================");
    printf("\n•               ânghelo.               •");
    printf("\n========================================");

    printf("\nDigite um numero:    ");
    scanf ("%i",&numero_escolhido);

    while (resultado != numero_escolhido)
    {
        resultado = c1+c2;
        printf("\n%i + %i = %i",c1,c2,resultado);
        c1 = resultado; 
    }
    return 0;
}