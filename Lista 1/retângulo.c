#include <stdio.h>

int main()
{
   float lenght, height;
   printf("digite os valores da base e da altura do retângulo:\n");
   scanf("%f %f", &lenght, &height);
   printf("%.2f", height*lenght);
}