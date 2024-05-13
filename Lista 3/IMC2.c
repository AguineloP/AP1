#include <stdio.h>

int main()
{
   float weight, height;
   
   printf("digite o seu peso e a sua altura:\n");
   scanf("%f %f", &weight, &height);
   printf("seu IMC é de %.2f\n", weight/(height*height));
   
   float IMC = (weight/(height*height));
   
   if(IMC<18.5){
       printf("MAGREZA");
   }
   else if (18.5<=IMC<=24.9){
       printf("NORMAL");
   }
   else if (25,0<=IMC<=29,9){
       printf("SOBREPESO");
   }
   else if (30,0<=IMC<=39,9){
       printf("OBESIDADE");
   }
   else{
       printf("OBESIDADE GRAVE");
   }
}