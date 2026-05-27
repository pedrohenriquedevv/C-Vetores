#include <stdio.h>
/*
Leia dois vetores de 5 posições e verifique se eles são iguais. 
*/
int main()
{
    int vetor1[5];
    int vetor2[5];

    for(int i = 0; i < 5; i ++)
    {
        printf("Digite 1: ");
        scanf("%d",&vetor1[i]);
    }
    for(int i = 0; i < 5; i ++)
    {
        printf("Digite 2: ");
        scanf("%d",&vetor2[i]);
    }

    for(int i = 0; i < 5; i++)
    {   
        if(vetor1[i] == vetor2[i])
        {
             printf("Nesta posição %d os vetores são iguais \n",i + 1);
        }
    }
}