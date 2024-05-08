#include <stdio.h>

int main()
{
   float produto, porcentagem;

   printf("digite o valor inicial do produto e o desconto que será aplicado nele:\n");
   scanf("%f %f", &produto, &porcentagem);

    //conferindo se o produto ou o desconto não assumem valores negativos
   if(produto < 0 || porcentagem < 0){
   printf("Informações inválidas");
   }
      
    //tem a função de converter para decimal, caso o usuário digite o desconto em porcentagem
   else if(porcentagem > 1){
      printf("%.2f", produto - produto*(porcentagem/100));
   }
      
   else{
      printf("%.2f", produto - (produto*porcentagem));
   }
   
}