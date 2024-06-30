#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 

void verify(char *phrase)
{
    int length = strlen(phrase);
    char reversed[100];
    
    for (int i = 0; i < length; i++) {
        reversed[i] = phrase[length - 1 - i];
    }
    reversed[length] = '\0'; 

    printf("\nInverso: %s\n", reversed);

    int same = 1;
    for (int i = 0; i < length; i++) {
        if (tolower(phrase[i]) != tolower(reversed[i])) {
            same = 0;
            break;
        }
    }

    if (same == 1) {
        printf("\n%s É palindromo.\n", phrase);
    } else {
        printf("\n%s Não é palindromo.\n", phrase);
    }
}

int main()
{
    char phrase[100];
    int charac, palindrome = 0;
    
    printf("Digite uma frase: ");
    gets(phrase);
    
    for(int i = strlen(phrase) - 1; i >= 0; i--)
    {
        printf("%c", phrase[i]);
    }
    
    verify(phrase);
}
