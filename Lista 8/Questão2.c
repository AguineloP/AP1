#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix [3][3], x, found = 0;
    
    printf("Digite os elementos da matriz: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }
    printf("Agora, digite o número a ser encontrado na matriz: \n");
    scanf("%i", &x);
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matrix[i][j] == x)
            {
                found = 1;
            }
        }
    }
    if(found == 1)
    {
        printf("O elemento %i foi encontrado.\n", x);
    }else{
        printf("O elemento não foi encontrado na matriz.\n");
    }
}