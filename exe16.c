#include <stdio.h>
/*
 Leia uma frase e substitua todas as letras “a” por “@”.  
*/
int main()
{
    char frase[40];

    printf("Digite sua frase:");
    fgets(frase,40,stdin);

    int tamanho = 0;
    while(frase[tamanho] != '\n')
    {
        tamanho ++;
    }

    for(int i = tamanho; i >= 0; i --)
    {
        if(frase[i] == 'a')
        {
            frase[i] = frase['@'];
        }
    }

    for(int i = 0; i < tamanho; i ++)
    {
        printf("%c",frase[i]);
    }
}