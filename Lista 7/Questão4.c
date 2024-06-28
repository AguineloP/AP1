#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void remov(char *phrase)
{
    char frase[10001];
    
    for(int i = 0; i < strlen(phrase); i++)
    {
        if(phrase[i] != 'a' && phrase[i] != 'e' && phrase[i] != 'i' && phrase[i] != 'o' && phrase[i] != 'u')
        {
            frase[i] = phrase[i];
        }
        printf("%c", frase[i]);
    }
}

void count(char *phrase)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int counting = 0;
    
    for(int i = 0; i < strlen(phrase); i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(phrase[i] == vowels[j])
            {
                counting++;
            }
        }
    }
    printf("%i", counting);
}

int main()
{
    char menu, phrase[10001];
    
    printf("Digite uma frase: \n");
    gets(phrase);
    
    printf("menu:\n"
    "a) Remover todas as vogais da frase.\n"
    "b) Contar a quantidade de vogais na frase.\n");
    scanf("%c", &menu);
    menu = tolower(menu);
    
    switch(menu)
    {
        case 'a':
        {
            remov(phrase);
            break;
        }
    
        case 'b':
        {
            count(phrase);
            break;
        }
    }
    
}