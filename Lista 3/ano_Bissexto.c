#include <stdio.h>

int main()
{
   int ano;

   printf("digite o ano:\n");
   scanf("%i", &ano);

   if((ano%4==0 && ano%100!=0) || ano%400==0){
      printf("ano bissexto");
}
   else{
     printf("ano não bissexto");
}
}