#include <stdio.h>
/*
Leia um vetor de 6 posições e remova os elementos repetidos.
*/
int main()
{
    int num[6];

    for(int i = 0; i < 6; i++)
    {
        printf("Digite: ");
        scanf("%d",&num[i]);
    }

    for(int i = 0; i < 6; i++)
    {   
        int repetido = 0;
        for(int j = 0; j < i ; j++)
        {
           if(num[i] == num[j])
           {
                repetido ++;
           }
        }
        if(repetido == 0)
        {
            printf("-%d\n",num[i]);
        }
    }    
}