#include <stdio.h>

int main()
{
    int num [10];

    printf("Digite 10 números:\n"); 
    for(int i = 0; i < 10; i++)
    {
        scanf("%i", &num[i]);
    }
    
    for(int i = 9; i > 0; i--)
    {
        printf("%i ", num[i]);
    }
}