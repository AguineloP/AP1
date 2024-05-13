#include <stdio.h>

int main()
{
   int aulas, faltas;
   float nota;
   
   printf("Digite a média de notas do aluno:\n");
   scanf("%f", &nota);

   printf("Agora digite o total de aulas ministradas e a quantidade de faltas do aluno:\n");
   scanf("%i %i", &aulas, &faltas);

   float faltas1 = aulas-(0.75*aulas);
   
   if(nota >=7 && faltas <= faltas1){
       printf("Aluno aprovado");
}
    else{
        printf("Aluno reprovado");
    }
}