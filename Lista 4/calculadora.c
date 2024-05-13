#include <stdio.h>

int main()
{
   char operação;
   float num1, num2;

   printf("digite dois números quaisquer\n");
   scanf("%f %f", &num1, &num2);

   printf("agora digite a operação a ser realizada: multiplicação (*), divisão (/), soma (+) e subtração(-)\n");
   scanf(" %c", &operação);
   
   switch (operação){
      
      case '*':
      printf("%.1f", num1*num2);
      break; 
      
      case '/':
      printf("%.1f", num1/num2);
      break;
      
      case '+':
      printf("%.1f", num1+num2);
      break;
      
      case '-':
      printf("%.1f", num1-num2);
      break;
      
      default:
      printf("operação inválida");
      break;
}
}