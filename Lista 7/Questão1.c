#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    char phrase[10001], phrase_up, phrase_low;
    int word = 1, charac;
    
    printf("Digite uma frase: ");
    gets(phrase);
    
    for(int i = 0; i < strlen(phrase); i++)
    {
        if(isspace(phrase[i]))
        {
            word++;
        }
    }
    
    for(int i = 0; i < strlen(phrase); i++)
    {
        charac++;
        if(isspace(phrase[i]))
        {
            charac--;
        }
    }
    
    printf("\nEssa frase digitada tem %i palavra(s), %i caracteres.\n", word, charac);

    for(int i = 0; i < strlen(phrase); i++)
    {
        phrase_up = toupper(phrase[i]);
        printf("%c", phrase_up);
    }
    
    printf("\n");

    for(int i = 0; i < strlen(phrase); i++)
    {
        phrase_low = tolower(phrase[i]);
        printf("%c", phrase_low);
    }
}
