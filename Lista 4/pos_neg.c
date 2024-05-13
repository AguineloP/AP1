#include <stdio.h>

int main()
{
   int N;
   
   printf("digite um número inteiro:\n");
   scanf("%i", &N);
   
   if(N>0){
    printf("o número é positivo");   
   }
   else if(N==0){
       printf("o número é igual a 0");
   }
   else{
     printf("o número é negativo");
   } 
}