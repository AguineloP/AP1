#include <stdio.h>

int main()
{
   float n1, n2, n3;
   
   printf("digite as três notas do aluno:\n");
   scanf("%f %f %f", &n1, &n2, &n3);
   printf("a média final do aluno é %.1f", (n1+n2+n3)/3);
}
