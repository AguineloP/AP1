#include <stdio.h>

int main()
{
    int num [5], media;

    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%i", &num[i]);
        
        media += num[i];
    }
    printf("A média dos números é %i\n", media/5);
}