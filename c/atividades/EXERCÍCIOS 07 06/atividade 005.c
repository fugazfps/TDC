// ânghelo
#include <stdio.h>
// ATIVIDADE 005
int main() {

    printf("========================================");
    printf("\n•               ânghelo.               •");
    printf("\n========================================\n\n");

    int VET[50],c=0;

    for (int v=0; v<=49; v++)
    {
        printf("%i Digite algum numero:       ",v);
        scanf ("%i",&VET[v]);
    }
    printf("\n");
    for (int a=0;a<=49;a++)
    {
        for (int b=0;b<=49;b++)
        {
            if (a != b) {if (VET[a]==VET[b]) {printf("O numero %i linha %i, é igual ao numero %i linha %i.\n",VET[a],a,VET[b],b);}}
        }
    }
    return 0;
}