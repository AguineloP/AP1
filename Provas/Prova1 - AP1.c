#include <stdio.h>
#include <stdlib.h>

int main()
{
   float compra;
   char desconto;
   
   printf("Digite o valor da sua compra: R$");
   scanf("%f", &compra);
   
   if(compra < 0)
   {
      printf("Valor inválido, tente novamente.\n");
   }

   printf("Digite o desconto a ser aplicado, categorizados pelas letras de A a F, maiúsculo: ");
   scanf(" %c", &desconto);

   switch(desconto)
   {
      case 'A':
         printf("Subtotal: R$%.2f\nCupom: A\nDesconto: 10%%\nValor a ser descontado: R$%.2f\nValor final: R$%.2f", compra, compra * .1, compra - (compra * .1));
      break;
      
      case 'B':
         printf("Subtotal: R$%.2f\nCupom: B\nDesconto: 20%%\nValor a ser descontado: R$%.2f\nValor final: R$%.2f", compra, compra * .2, compra - (compra * .2));
      break;
      
      case 'C':
         printf("Subtotal: R$%.2f\nCupom: C\nDesconto: 30%%\nValor a ser descontado: R$%.2f\nValor final: R$%.2f", compra, compra * .3, compra - (compra * .3));
      break;
            
      case 'D':
         printf("Subtotal: R$%.2f\nCupom: D\nDesconto: 40%%\nValor a ser descontado: R$%.2f\nValor final: R$%.2f", compra, compra * .4, compra - (compra * .4));
      break;
            
      case 'E':
         printf("Subtotal: R$%.2f\nCupom: E\nDesconto: 50%%\nValor a ser descontado: R$%.2f\nValor final: R$%.2f", compra, compra * .5, compra - (compra * .5));
      break;
            
      default:
        printf("Não foi possível realizar a operação!\n");
      break;
   }
}