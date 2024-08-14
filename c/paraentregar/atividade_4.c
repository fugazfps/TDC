// ANGHELO
#include <stdio.h>

// ATIVIDADE 4

int main() {
    int num[3];

    printf("Digite o primeiro numero:     ");
    scanf ("%i",&num[0]);
    printf("Digite o segundo numero:      ");
    scanf ("%i",&num[1]);
    printf("Digite o terceiro numero:     ");
    scanf ("%i",&num[2]);
    printf("\n");
    printf("Primeiro numero:   %i",num[0]);
    if (num[0] < 0) {printf("\nO primeiro numero é negativo");}
    if (num[0] > 0) {printf("\nO primeiro numero é positivo");}
    if (num[0] == 0) {printf("\nO primeiro numero é zero");}
    if (num[0] >= 10) {printf("\nO primeiro numero é maior que dez");}
    else {printf("\nO primeiro numero é menor que dez");}
    printf("\n\n");
    printf("Segundo numero:   %i",num[1]);
    if (num[1] < 0) {printf("\nO segundo numero é negativo");}
    if (num[1] > 0) {printf("\nO segundo numero é positivo");}
    if (num[1] == 0) {printf("\nO segundo numero é zero");}
    if (num[1] >= 10) {printf("\nO segundo numero é maior que dez");}
    else {printf("\nO segundo numero é menor que dez");}
    printf("\n\n");
    printf("Terceiro numero:   %i",num[2]);
    if (num[2] < 0) {printf("\nO terceiro numero é negativo");}
    if (num[2] > 0) {printf("\nO terceiro numero é positivo");}
    if (num[2] == 0) {printf("\nO terceiro numero é zero");}
    if (num[2] >= 10) {printf("\nO terceiro numero é maior que dez");}
    else {printf("\nO terceiro numero é menor que dez");}
    
    return 0;
}