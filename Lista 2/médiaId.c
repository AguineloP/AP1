#include <stdio.h> 

int main ()
{
   int idade1, idade2, idade3;
   float média;

   printf("digite a seguir a idade das três pessoas:\n");
   scanf("%i %i %i", &idade1, &idade2, &idade3);

   média = (idade1 + idade2 + idade3)/3;

   printf("a média da idade das três pessoas é %.1f", média);
   
}