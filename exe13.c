#include <stdio.h>
/*
 Crie um algoritmo que leia um vetor e rotacione os elementos uma posição 
para a direita
*/
int main()
{
    int t;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&t);

    int vetor[t];
    int vetorD[t];

    for(int i = 0; i < t; i++)
    {
        printf("Digite:");
        scanf("%d",&vetor[i]);
    }

    for(int i = 0; i < t; i++)
    {   
        vetorD[i] = vetor[t - 1 - i];
    }

    printf("Passando um para o lado\n");
    printf("\n");

    for(int i = 0; i < t; i++)
    {
        printf("-%d\n",vetorD[i]);
    }
}