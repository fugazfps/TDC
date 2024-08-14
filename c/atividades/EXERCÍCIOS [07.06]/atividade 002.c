// ânghelo
#include <stdio.h>
int main() {

    float saldo=0.0,debito=0.0,credito=0.0,saldoAtual=0.0;
    int conta=0;

    printf("========================================");
    printf("\n•             BANCO DO BEM             •");
    printf("\n•               ânghelo.               •");
    printf("\n========================================\n\n");

    printf("DIGITE A SUA SENHA:        🔒 ");
    scanf ("%i",&conta);
    printf("DIGITE SEU SALDO ATUAL:     R$");
    scanf ("%F",&saldo);
    printf("DIGITE SEU DEBITO:          R$");
    scanf ("%F",&debito);
    printf("DIGITE SEU CREDITO:         R$");
    scanf ("%F",&credito);
    
    saldoAtual = saldo - debito + credito;
    
    printf("\nSaldo:                      R$%F",saldoAtual);
    if (saldoAtual >= 0) {printf("\nStatus:                     Saldo positivo!");}
    else {printf("\nStatus:                     Saldo negativo!");}
    return 0;
}