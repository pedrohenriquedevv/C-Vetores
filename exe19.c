#include <stdio.h>
/*
Faça um programa que leia uma string e remova todos os espaços em 
branco. 
*/
int main()
{
    char frase[50];
    printf("Digite:");
    fgets(frase,50,stdin);

    int tamanho = 0;
    while(frase[tamanho] != '\n')
    {
        tamanho++;
    }

    char fraseN[tamanho];
    int j = 0;

    for(int i = 0; i < tamanho; i++)
    {   
        if(frase[i] != ' ')
        {
            fraseN[j] = frase[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++)
    {
        printf("%c",fraseN[i]);
    }
}