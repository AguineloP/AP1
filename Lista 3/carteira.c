#include <stdio.h>
#include <string.h>
int main()
{
   int idade;
   char resposta[4];

   printf("digite a sua idade\n");
   scanf("%i", &idade);

   printf("você tem carteira de motorista?\n");
   scanf("%s", resposta);

   if(strcmp(resposta, "sim")==0  && idade>=18){
      printf("pode dirigir");
}
   else{
      printf("não pode dirigir");
   }
}   