// ânghelo
#include <stdio.h>
// ATIVIDADE 005
int main() {

    printf("========================================");
    printf("\n•               ânghelo.               •");
    printf("\n========================================\n\n");

    int VET[50],c=0;

    for (int v=0; v<=3; v++)
    {
        printf("%i Digite algum numero:       ",v);
        scanf ("%i",&VET[v]);
    }
    for (int a=0;a<=3;a++)
    {
        for (int b=1;b<=3;b++)
        {
            if (VET[a]==VET[b]) {printf("O numero %i linha %i, é igual ao numero %i linha %i\n",VET[a],a,VET[b],b);}
        }
    }
    return 0;
}