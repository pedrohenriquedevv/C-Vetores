#include <stdio.h>
/*
 Leia uma string e mostre a frase invertida.
*/
int main()
{
    char frase[40];
    printf("Digite uma frase:");
    fgets(frase,40,stdin);

    int tamanho = 0;
    while(frase[tamanho] != '\n')
    {
        tamanho ++;
    }

    for(int i = tamanho ; i >= 0; i --)
    {
        printf("%c",frase[i]);
    }
}