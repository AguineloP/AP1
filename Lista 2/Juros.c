#include <stdio.h>
#include <math.h>

int main()
{
   float valorInicial, juros;
   int tempo;
   
   printf("Digite o valor inicial, a taxa de juros anuais e os anos:\n");
   scanf("%f %f %i", &valorInicial, &juros, &tempo);
  
   //o if a seguir é para garantir que o usuário tenha inserido valores válidos
   if(valorInicial < 0 || juros < 0 || tempo < 0){
      printf("entrada inválida, tente novamente");
      }
   
   //o else if a seguir serve para que o resultado continue exato, mesmo que ele digite os juros em valor inteiro (ex:50%), ao invés de decimal (ex: 0.5)  
   else if(juros > 1){
      printf("O valor final, acrescido dos juros no tempo decorrido de %i anos é de R$%.2f", tempo, valorInicial*pow(1+(juros/100),tempo));
   }
   
   else{
    printf("O valor final, acrescido dos juros no tempo decorrido de %i anos é de R$%.2f", tempo, valorInicial*pow(1+juros, tempo));
      }
      
}