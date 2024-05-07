#include <stdio.h>

int main()
{
   double celsius;

   printf("digite a temperatura em graus Celsius:\n");
   scanf("%lf", &celsius);

   printf("Isso equivale a %.2lf Fahrenheit", celsius*1.8 + 32);
}