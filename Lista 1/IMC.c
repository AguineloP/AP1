#include <stdio.h>

int main()
{
   float weight, height;

   printf("digite o seu peso e a sua altura:\n");
   scanf("%f %f", &weight, &height);
   printf("seu IMC é de %.2f", weight/(height*height));
}