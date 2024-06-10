#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void numPares()     //função do item a, referente aos números pares
{
    int num[5], pares[5], verificador = 0, i;
    char a;
    
    for(i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        if(scanf("%i", &num[i]) != 1 || (a = getchar()) != '\n' || isalpha(a)){
        //verificando se o usuário não digitou um caractere
        
            printf("ERRO! Caracteres não são valores válidos.\n");
            while (getchar() != '\n'); //limpando buffer de entrada
            i--;
        }
    }
    printf("Os pares são: ");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 0)
        {
            printf("%i ", num[i]);
            verificador++;
        }
    }
    if(verificador == 0)
    {
        printf("Nenhum par foi digitado.\n");
    }
}

void numMaiMen()     //função do item b, que escreve o maior e menor número
{
    int maior, menor, num[4];
    char a;
    
    printf("Digite um número: \n");
    if(scanf("%i", &num[0]) != 1 || (a = getchar()) != '\n' || isalpha(a)){
    //verificando se o usuário não digitou um caractere
        
        printf("ERRO! Caracteres não são valores válidos.\n");
        while (getchar() != '\n'); //limpando buffer de entrada
    }
    
    maior = menor = num[0];
    
    for(int i = 1; i < 5; i++)
    {
        printf("Digite um número: \n");
        if(scanf("%i", &num[i]) != 1 || (a = getchar()) != '\n' || isalpha(a))
        {
            printf("ERRO! Caracteres não são valores válidos.\n");
            while (getchar() != '\n'); //limpando buffer de entrada
            i--;
            num[i] = 0;
            
        }
        if(num[i] > maior)
        {
            maior = num[i];
        }
        if(menor > num[i])
        {
            menor = num[i];
        }
    }
    printf("O menor número digitado é %i e o maior é %i.\n", menor, maior);
}

void tabuada()     //função do item c, que escreve a tabuada do número digitado
{
    int num;
    char a;
    
    printf("Digite um número: ");
    if(scanf("%i", &num) != 1 || (a = getchar()) != '\n' || isalpha(a)){
    //verificando se o usuário não digitou um caractere
        
        printf("ERRO! Caracteres não são valores válidos.\n");
        while (getchar() != '\n'); //limpando buffer de entrada
    }

    else
    {
        for(int i = 1; i <= 10; i++)
        {
            printf("%i X %i = %i\n", num, i, num * i);
        }
    }
}

int main()
{
    char menu;
    
    do{
        printf("\nMENU:\n"
        "a)Lê 5 números e escreve na tela somente os pares.\n"
        "b)Lê 5 números e escreve na tela o maior e o menor.\n"
        "c)Lê um número e escreve a tabuada dele.\n"
        "d)Fecha o programa.\n");
        scanf(" %c", &menu);
        menu = tolower(menu);
        
        while ((getchar()) != '\n');     //limpando o buffer do scanf do menu
        
        if(menu < 'a' || menu > 'd'){
            printf("ERRO! Esta opção não está no menu.");
        }
        else{
            switch(menu){
                case 'a':
                {                    
                    numPares();
                    break;
                }
                
                case 'b':
                {
                    numMaiMen();
                    break;
                }
                
                case 'c':
                {
                    tabuada();
                    break;
                }
            }
        }
        
    }while(menu != 'd');
}
