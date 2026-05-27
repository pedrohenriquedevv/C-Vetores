#include <stdio.h>
/*
Crie um algoritmo que leia 10 valores e verifique se um número informado
pelo usuário existe no vetor, caso existir, indique a posição
*/
int main()
{
    int numero[5];
    int testador;

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
            printf("Encontrado no lugar: -%d\n",i + 1);
        }else
        {
            printf("Nada aqui -%d\n",i);
        }
    }
}