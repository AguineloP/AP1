#include <stdio.h>
#include <string.h>

int main()
{
    float grade[3][4];
    
    for(int i = 0; i < 3; i++)
    {
        printf("Digite as notas do aluno %i:\n", i + 1);
        
        for(int j = 0; j < 4; j++)
        {
            scanf("%f", &grade[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        float add = 0;
        
        for(int j = 0; j < 4; j++)
        {
            add += grade[i][j];
        }
        printf("A média do aluno %i foi %.2f.\n", i + 1, add/4);
    }
    
}