// ânghelo
#include <stdio.h>
int main() {

    int num[20];

    printf("========================================");
    printf("\n•               ânghelo.               •");
    printf("\n========================================\n\n");

    for (int v=0; v<=19; v++)
    {
        printf("Digite um numero:     ");
        scanf ("%i",&num[v]);
    }  
    for (int v2=19; v2 >=0; v2--)
    {
        printf("\nNumero                %i",num[v2]);
    }

    return 0;
}