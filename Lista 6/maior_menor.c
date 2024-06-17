#include <stdio.h>

int main()
{
    int num [8], maior, menor;
   
    printf("Digite oito números:\n");
    scanf("%i", &num[0]);
    maior = menor = num[0];

    for(int i = 1; i < 8; i++)
    {
        scanf("%i", &num[i]);
        
        if(num[i] > maior)
        {
            maior = num[i];
        }
        else if(menor > num[i])
        {
            menor = num[i];
        }
    }
    
    printf("O maior número é %i e o menor é %i.\n", maior, menor);
}