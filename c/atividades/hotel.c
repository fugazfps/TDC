// Anghelo
#include <stdio.h>

int main() {
    float diarias=0, total=0, taxa_serviço=0, extra=0, parcela;   
    char nome_hospede[100], f = 'N';
    int dias=0,numero_quarto=0;

    printf("Deseja calcular a cobrança? (S/N)   ");
    scanf ("%s",&f);
    

    while (f != 'N') 
    {
        printf("-------------------------------------------------------------------------------------\n");
        printf("Nome do Hospede:                  ");
        scanf ("%s",&nome_hospede);
        printf("Numero do quarto:                 ");
        scanf ("%i",&numero_quarto);
        printf("Dias hospedados:                  ");
        scanf ("%i",&dias);
        printf("Algum extra:                      ");
        scanf ("%f",&extra);

        if (dias <= 15) {taxa_serviço = dias * 18;}
        if (dias == 15) {taxa_serviço = dias * 16;}
        if (dias >= 15) {taxa_serviço = dias * 15.5;}

        diarias = dias * 160;

        total = diarias + taxa_serviço + extra;

        parcela = total / 3;

        printf("\nCobrança:");
        printf("\nNome:                       %s",nome_hospede);
        printf("\nQuarto:                     %i",numero_quarto);
        printf("\nDiarias:                    %i - R$%f",dias,diarias);
        printf("\nTaxa de serviço:            R$%f",taxa_serviço);
        printf("\nExtras:                     R$%f",extra);
        printf("\nTotal:                      R$%f",total);
        printf("\n\nParcelamento em até 3x de:  R$%f",parcela);
        printf("-------------------------------------------------------------------------------------\n");
        printf("Deseja calcular a cobrança? (S/N)   ");
        scanf ("%s",&f);
    }
    return 0;
}