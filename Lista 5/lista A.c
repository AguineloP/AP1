#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void mediaId()
{
    int idade = 0, quantidade = 0;
    float soma = 0;
    char a;

    do{
    printf("Digite a idade: ");
    if(scanf("%i", &idade) != 1 || (a = getchar()) != '\n' || isalpha(a))
    //verificando se o usuário não digitou um caractere
    //ou seja, verificando se o resultado deu 0, ou seja, um valor inválido;
    // ||caso seja inválido, a segunda parte verifica atribui o input do usuário ao char 'a'
    //e verifica se o usuário não digitou uma linha em branco;  ||verificando se de fato a
    //variável 'a' não é um caractere de a-z
    {
        printf("ERRO! Caracteres de a-z não são valores válidos.\n");
        
        quantidade -= 2; /*apenas tendo certeza de que a mensagem "nenhum valor inserido"
        não seja escrito na tela*/
        while (getchar() != '\n'); //limpando buffer de entrada
        break; 
    }
    if(idade >= 0)
    {
    soma += idade;
    quantidade++;
    //se a idade digitada for igual ou maior do que 0, é somado à variável soma 
    //o valor da variável idade e acrescente uma unidade à variável quantidade
    }
    }while(idade >= 0); //e irá receber valores enquanto o valor digitado for maior
    //ou igual a zero
    
    if(quantidade == 1)
    { //para caso o usuário digite somente uma idade
        printf("A média da idade digitada é a própria idade, ou seja, %i.\n", idade);
    }
    
    if(quantidade > 1)
    {
        printf("A média das idades digitadas é: %.2f anos.\n", soma/quantidade);    
    }

    if(quantidade == 0)
    { //caso o usuário não digite nenhum valor
    printf("ERRO! Nenhum valor foi inserido.");
    }
}

void fibonacci()
{
    int num, fib, fib1 = 1, fib2 = 1;
    char a;
    
    printf("Digite um número: ");
    if(scanf("%i", &num) != 1 || (a = getchar()) != '\n' || isalpha(a))
    //verificando se o usuário não digitou um caractere
    {
        printf("ERRO! Caracteres não são valores válidos para a sequência.\n");
        while (getchar() != '\n'); //limpando buffer de entrada 
    }
    else
    {
    printf("1 1 ");
    while(fib1 + fib2 <= num)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf("%i ", fib);
    }
    }
}

void numPrimos()
{
    int numero, primo = 1, i = 2;
    char a;
    
    printf("Digite um número para verificar se é primo: ");
    if(scanf("%i", &numero) != 1 || (a = getchar()) != '\n' || isalpha(a))
    //verificando se o usuário não digitou um caractere
    {
        printf("ERRO! Valor inválido, tente novamente.");
        while (getchar() != '\n'); //limpando buffer de entrada
        return;
    }
    else
    {
        if(numero <= 1)
        {
            primo = 0;
        }
        else if(numero == 2)
        {
            primo = 1;
        }
        else
        {
        do{
            if(numero % i == 0)
            {
                primo = 0;
                break;
            }
            i++;
        }while(i <= numero/2);
        }
        if(primo == 1)
        {
            printf("É primo.");
        }
        else
        {
            printf("Não é primo.");
        }
    }
}

int main()
{
    char menu;

    do{
        printf("\nMENU:\n"
               "a) Faz a média da idade de um grupo de pessoas.\n"
               "b) Lê um número escrito pelo usuário e escreve a sequência"
               " de Fibonacci até esse número.\n"
               "c) Lê um número escrito pelo usuário e escreve se ele é primo"
               " ou não.\n"
               "d) Fecha o menu.\n");
        scanf(" %c", &menu);
        menu = tolower(menu);
        
        while ((getchar()) != '\n');
        //limpando o buffer de entrada após o scanf do menu

        if(menu < 'a' || menu > 'd'){
            printf("ERRO! A opção digitada não está no menu.");
        }
        else{
            switch(menu){
                case 'a':
                {
                    mediaId();
                    break;
                }
                break;

                case 'b':
                {
                    fibonacci();
                    break;
                }
                break;

                case 'c':
                {
                    numPrimos();
                    break;
                }
            }
        }
    }while(menu != 'd');
}