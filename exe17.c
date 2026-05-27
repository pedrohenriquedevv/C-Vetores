#include <stdio.h>
/*
 Faça um programa que leia uma palavra e verifique se ela é um palíndromo. 
*/
int main()
{
    char frase[50];
    printf("Digite uma frase:");
    fgets(frase,50,stdin);

    int tamanho = 0;
    while(frase[tamanho] != '\n')
    {
        tamanho ++;
    }

    char frasesem[tamanho + 1];
    int j = 0;
    
    for(int i = 0; i < tamanho; i++)
    {
        if(frase[i] != ' ')
        {
            frasesem[j] = frase[i];
            j++;
        }        
    }

    int palidromo = 1;

    for(int i = 0; i < j; i++)
    {
        if(frasesem[i] != frasesem[j -1 -i])
        {
            palidromo = 0;
            break;
        }      
    }
    
    if(palidromo == 1)
    {
        printf("É um palidromo");
    }else
    {
        printf("Não é um palidromo");
    }
}