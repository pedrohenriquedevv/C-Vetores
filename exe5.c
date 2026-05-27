#include <stdio.h>
/*
Leia um vetor com 15 números e substitua:
a. números negativos por 0. 
*/
int main()
{
    int numero[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Digite:");
        scanf("%d",&numero[i]);
        if(numero[i] < 0)
        {
            numero[i] = 0;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        if(numero[i] == 0)
        {
            printf("-%d substituição\n",numero[i]);
        }else
        {
        printf("-%d\n",numero[i]);            
        }
    }
}