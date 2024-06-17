#include <stdio.h>

int main()
{
    int num [10], i, x, verify = 0;
    
    printf("Digite 10 números:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%i", &num[i]);
    }
    
    printf("Digite um número para verificar se ele foi digitado na sequência:\n");
    scanf("%i", &x);
    
    for(i = 0; i < 10; i++)
    {
        if(num[i] == x)
        {
            printf("O número %i foi encontrado na posição %i.\n", x, i+1);
            verify++;
        }
    }
    if(verify == 0)
    {
        printf("O número %i não foi encontrado na sequência.\n", x);
    }
}