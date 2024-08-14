// ANGHELO
#include <stdio.h>
#include <string.h>
// ATIVIDADE 10
int main() {

    float desconto=0.0,valor=0.0,quantidade=0,valor_quantidade=0.0,porcentagem=0.0,resultado_desconto=0.0,desconto_vip=0.0,desconto_valor=0.0,com_desconto_vip=0.0,valor_total_descontado=0.0;
    char str1[8],fechar;

    printf("========================================");
    printf("\n•            VIP ou REGULAR            •");
    printf("\n•               ânghelo.               •");
    printf("\n========================================");

    printf("\n\nDeseja calcular o desconto? (S/N)   ");
    scanf ("%s",&fechar);
    printf("\n========================================\n");

    while (fechar != 'N' && fechar != 'n')
    {
        printf("\nDigite a quantidade de itens:       ");
        scanf ("%f",&quantidade);
        printf("Digite o preço do item:             ");
        scanf ("%f",&valor);
        printf("Digite o desconto:                  ");
        scanf ("%f",&desconto);
        printf("Digite o tipo de cliente:           ");
        scanf ("%s",&str1);
        
        int parar = 1;
        
        while (quantidade!=0 && valor != 0 && parar !=0)
        {

            int result = strcmp(str1,"VIP");  
            if (result==0) {desconto_vip = desconto_vip + 0.05;}
            if (result<0)  {desconto_vip = desconto_vip + 0;}
            
            valor_quantidade = quantidade * valor;
            porcentagem = desconto / 100;
            resultado_desconto = valor_quantidade * porcentagem;

            desconto_valor = valor_quantidade - resultado_desconto;
            com_desconto_vip = desconto_valor * desconto_vip;

            valor_total_descontado = valor_quantidade - resultado_desconto - com_desconto_vip;

            parar = 0; 
            
            for (int v=0; v<1;)
            {
                printf("\nDados do pedido:");
                printf("\nValor total:              R$%f",valor_quantidade);
                printf("\nDesconto:                 R$%f",resultado_desconto);
                if (result==0) {printf("\nDesconto vip:             R$%f",com_desconto_vip);}

                printf("\n\nCom todos os descontos:   R$%f",valor_total_descontado);
                v++;
            }
        }
        if (quantidade == 0 || valor == 0) {printf("\nErro! Zero em alguma resposta!");}
        printf("\n\n========================================\n");
        printf("\nDeseja calcular o desconto? (S/N)   ");
        scanf ("%s",&fechar);
        printf("\n========================================\n");
        
    }
    printf("\nFim.");
    return 0;
}