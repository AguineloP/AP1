#include <stdio.h>
#include <string.h>

int main()
{
    char name[3][50];
    
    printf("Digite os nomes da matriz: \n");
    for(int i = 0; i < 3; i++)
    {
        gets(name[i]);
    }
    
    printf("Os nomes digitados foram: \n");
    
    for(int i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }
}