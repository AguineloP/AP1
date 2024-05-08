#include <stdio.h>

int main()
{
   float real, dolar;

   printf("digite o valor em reais que você quer converter, e o valor do dólar hoje:\n");
   scanf("%f %f", &real, &dolar);

   if(real < 0 || dolar < 0){
      printf("valores inválidos");
      }

   else{
      printf("US$%.2f", real/dolar);
      }
}  