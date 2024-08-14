// ANGHELO
#include <stdio.h>

// ATIVIDADE 9
int main() {

    int numero_escolhido=0,c1=0,resultado=1,divisao3,divisao5,tudo=0,media=0;
    
    printf("========================================");
    printf("\n•               ânghelo.               •");
    printf("\n========================================");

    printf("\n\nDigite um numero:    ");
    scanf ("%i",&numero_escolhido);

    for (int v=1; v<=numero_escolhido; v++)
    {
        printf("\nnumero %i",resultado);
        c1 = resultado++;
    }
    printf("\n\nInformações do numero %i",numero_escolhido);
    if (numero_escolhido % 3 == 0) {printf("\n\nÉ divisivel por 3");}
    if (numero_escolhido % 3 > 0) {printf("\n\nNão é divisivel por 3");}
    if (numero_escolhido % 5 == 0) {printf("\nÉ divisivel por 5");}
    if (numero_escolhido % 5 > 0) {printf("\nNão é divisivel por 5");}
    if (numero_escolhido % 3 ==0 && numero_escolhido % 5 == 0) {printf("\nÉ divisivel por ambos");}
    return 0;
}