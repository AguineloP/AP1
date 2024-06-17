#include <stdio.h>

int main()
{
    int num [12], dobro[12];

    printf("Digite um número:\n");
    for(int i = 0; i < 12; i++)
    {
        scanf("%i", &num[i]);
        printf("O dobro desse número é %i.\n", num[i] * 2);
    }
}