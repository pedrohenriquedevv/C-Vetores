#include <stdio.h>
/*
 Faça um programa que leia duas palavras e verifique se elas são iguais. 
*/
int main()
{
    char frase[40];
    char frase2[40];

    printf("Digite uma frase:");
    fgets(frase,40,stdin);
    
    printf("Digite uma frase:");
    fgets(frase2,40,stdin);

    int igual = 1;
    for(int i = 0; i < 40; i ++)
    {
        if(frase[i] == '\n' || frase[i] == '\0')
        {
            break;
        }
        if(frase[i] != frase2[i])
        {
            igual = 0;
            break;
        }
    }

    if(igual == 1)
    {
        printf("são iguais");
    }else
    {
        printf("Nao sao");
    }
}
