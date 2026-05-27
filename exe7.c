#include <stdio.h>
/*
Faça um programa que leia um vetor e informe quantas vezes um
determinado número aparece.
*/
int main()
{
    int numero[5];
    int testador;
    int contador = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Digite:");
        scanf("%d",&numero[i]);
    }

    printf("Testador:");
    scanf("%d",&testador);

    for(int i = 0; i < 5; i++)
    {
        if(testador == numero[i])
        {
            contador ++;
        }
    }

    printf("Achei o número %d, %d vezes.",testador,contador);
}