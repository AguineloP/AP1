#include <stdio.h>
#include <math.h>

int main()
{
   float radius;
   
   printf("digite o raio do círculo:\n");
   scanf("%f", &radius);

   printf("a área do círculo é de %.2f", M_PI*pow(radius,2));
}