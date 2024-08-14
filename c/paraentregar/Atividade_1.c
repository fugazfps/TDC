// ANGHELO
#include <stdio.h>

// ATIVIDADE 1
int main() {
    
    int   numint=0;
    float numfloat=0.0;
    char  caracter[1];
    
    printf("Digite um numero inteiro:     ");
    scanf ("%i",&numint);
    printf("Digite um numero flutuante:   ");
    scanf ("%f",&numfloat);
    printf("Digite uma string:            ");
    scanf ("%s",&caracter);
    printf("\nNumero inteiro:    %i",numint);
    printf("\nNumero flutuante:  %f",numfloat);
    printf("\nString:            %s",caracter);
    return 0;
}