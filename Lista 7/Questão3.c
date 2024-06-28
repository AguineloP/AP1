#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void no_space(char *phrase)
{
    for(int i = 0; i < strlen(phrase); i++)
    {
        if(isalnum(phrase[i]))
        {
            printf("%c", phrase[i]);
        }
    }
}

void asterisk(char *phrase)
{
    char x;
    
    printf("Digite qual letra você quer substituir por '*': ");
    scanf(" %c", &x);
    
    for(int i = 0; i < strlen(phrase); i++)
    {
        if(phrase[i] == x)
        {
            phrase[i] = '*';
        }
    }
    printf("%s", phrase);

}

int main()
{
    char menu, phrase[10001];
    
    printf("Digite uma frase: \n");
    gets(phrase);
    
    printf("\na) Remove os espaços da frase.\nb)Trocar uma determinada letra por '*'.\n");
    printf("Escolha a opção que você deseja: ");

    scanf(" %c", &menu);
    
    menu = tolower(menu);
    
    switch(menu)
    {
        case 'a':
        {
            no_space(phrase);
            break;
        }
        case 'b':
        {
            asterisk(phrase);
            break;
        }
    }
}