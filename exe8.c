#include <stdio.h>
/*
Leia 10 números inteiros e ordene o vetor em ordem crescente.
*/
int main()
{
    int numeros[6];
    int aux;

    for(int i = 0; i < 6; i++)
    {
        printf("Digite:");
        scanf("%d",&numeros[i]);
    }
    //6 4 5 3 7 1    ->    1 3 4 5 6 7
    //0 1 2 3 4 5          5 3 1 2 0 4

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    printf("Números em ordem crescente:");
    for(int i = 0; i < 6; i++)
    {
        printf("-%i ",numeros[i]);
    }

}