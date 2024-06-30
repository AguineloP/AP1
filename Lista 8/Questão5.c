#include <stdio.h>
#include <string.h>

int main()
{
    int matrix[3][3];
    
    printf("Digite os valores da matriz: \n");
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }
    
    printf("\n");
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("[%i] ", matrix[i][j]);
        }
        printf("\n");
    }
}