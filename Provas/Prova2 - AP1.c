#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void ufj()
{
    printf(
    "           __         __\n"
    "           ||         ||\n"
    "  |        ||         ||        |\n"
    " /|        ||=========||        |\\ \n"
    " ||        ||         ||        ||        ___         ___   __________   ______\n"
    " ||        ||=========||        ||        |||         |||   ||||||||||   ||||||\n"
    " ||========||         ||========||        |||         |||   |||             |||\n"
    " ||        ||         ||        ||        |||         |||   |||_____        |||\n"
    " ||        ||         ||        ||        |||         |||   ||||||||        |||\n"
    " ||        ||         ||        ||        |||         |||   |||             |||\n"
    " ||        ||         ||        ||        \\\\||       ||//   |||     \\\\      |||\n"
    "  \\\\        \\\\       //        //          \\\\\\       ///    |||      \\\\ ___///\n"
    "   \\\\        \\\\     //        //            \\\\\\_____///     |||       \\\\===//\n"
    "    \\\\\\       \\\\===//       ///               #=====#\n"
    "      \\\\\\\\\\    =====    /////\n"
    "        \\\\\\\\\\\\\\\\= =////////\n"
    "            \\\\\\      ///\n"
    );
}

int main()
{
    ufj();
    
    int qtd_students = 0;
    printf("\n\nOlá! Bem-vindo(a) aos sistemas da UFJ.\n"
    "Digite quantos alunos você quer fazer o registro: \n");
    scanf("%i", &qtd_students);
    
    while (getchar() != '\n');
    
    char name[qtd_students][50], regis[qtd_students][15];
    float grades[qtd_students][3], sum[qtd_students], avg[qtd_students];
    
    for(int i = 0; i < qtd_students; i++)
    {
        char temp[15]; //apenas uma variável temporária
        int valid = 1;
        sum[i] = 0;
        avg[i];
        
        printf("\nDigite o nome do aluno que você quer registrar: \n");
        fgets(name[i], 50, stdin);
        
        if (name[i][strlen(name[i]) - 1] == '\n') //apagando o \n da variável
        {
            name[i][strlen(name[i]) - 1] = '\0';
        }
        
        for(int j = 0; j < strlen(name[i]); j++)
        {
            if(isdigit(name[i][j]))
            {
                printf("Não é permitido inserir números no nome dos alunos. Tente novamente.\n");
                valid = 0;
                break;
            }
        }
        if(valid == 0)
        {
            i--;
            continue;
        }
        
        printf("\nDigite a matrícula do aluno: \n");
        fgets(temp, 15, stdin);
            
        if (temp[strlen(temp) - 1] == '\n') 
        {
            temp[strlen(temp) - 1] = '\0';
        }
        
        for(int j = 0; j < i; j++)
        {
            if(strcmp(temp, regis[j]) == 0)
            {
                printf("Essa matrícula já foi registrada. Tente novamente.\n");
                valid = 0;
                break;
            }
        }
        if(valid == 0)
        {
            i--;
            continue;
        }
        
        strcpy(regis[i], temp);
        
        for(int j = 0; j < strlen(regis[i]); j++)
        {
            if(isalpha(regis[i][j]))
            {
                printf("\nNão é permitido inserir letras na matrícula. Tente novamente.\n");
                valid = 0;
                break;
            }
        }
        if(valid == 0)
        {
            i--;
            continue;
        }
        
        printf("Digite as notas do aluno %s: \n", name[i]);

        for(int j = 0; j < 3; j++)
        {
            scanf("%f", &grades[i][j]);

            if(grades[i][j] < 0 || grades[i][j] > 10)
            {
                printf("Nota inválida. Valores permitidos vão de 0 a 10.\n"
                "Digite novamente: \n");
                j--;
            }
            sum[i] += grades[i][j];
            avg[i] = sum[i]/3;
        }
    
        while (getchar() != '\n');
    }
    
    printf("\n");
    
    for(int i = 0; i < qtd_students; i++)
    {
        for(int j = 0; j < strlen(name[i]) + 8; j++)
        {
            printf("=");
        }

        printf("\n|Aluno: %s\n"
        "|Matrícula: %s\n", name[i], regis[i]);
        
        for(int j = 0; j < 3; j++)
        {
            printf("|Nota %.i: %.2f\n", j+1, grades[i][j]);
        }
        
        printf("|Média: %.2f\n", avg[i]);
        
        for(int j = 0; j < strlen(name[i]) + 8; j++)
        {
            printf("=");
        }
        printf("\n");
    }
}