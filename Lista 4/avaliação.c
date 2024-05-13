#include <stdio.h>

int main()
{
	int N;

   printf("digite um número de 1 a 5:\n");
   scanf("%i", &N);

   switch(N){
      case 1:
         printf("péssimo");
         break;

      case 2:
         printf("ruim");
         break;

      case 3:
         printf("médio");
         break;

      case 4:
         printf("bom");
         break;

      case 5:
         printf("excelente");
         break;

      default:
         printf("valor inválido");
}
}