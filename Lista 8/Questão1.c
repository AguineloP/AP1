#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix [4][4], bigger = 0;
    
    printf("Digite os elementos da matriz: \n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%i", &matrix[i][j]);
            if(matrix[i][j] > bigger)
            {
                bigger = matrix[i][j];
            }
        }
    }
    printf("O maior elemento da matriz é %i", bigger);
}