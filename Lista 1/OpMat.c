#include <stdio.h>

int main()
{
   int num1, num2;
   float div;
   printf("digite dois números inteiros:\n");
   scanf("%d %d", &num1, &num2);
   
   div = num1/num2;
   printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.1f", num1, num2, num1+num2, num1, num2, num1-num2, num1, num2, num1*num2, num1, num2, div);
}
