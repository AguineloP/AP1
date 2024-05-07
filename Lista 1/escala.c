#include <stdio.h>

int main()
{
   float meter;
   
   printf("digite seu valor em metros:\n");
   scanf("%f", &meter);

   printf("isso equivale a %.1f centímetros e %.2f milímetros", meter*100, meter*1000);
}