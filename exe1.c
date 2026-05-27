#include <stdio.h>

int main()
{
    int numeros[6];
    int epar = 0;
    int eimpar = 0;

    for(int i = 0; i < 6; i++)
    {
        printf("Digite seu número:");
        scanf("%d",&numeros[i]);

        if(numeros[i] % 2 == 0)
        {
            epar++;
        }else
        {
            eimpar++;
        }
    }

    printf("A QUANTIDADE DE NUMEROS PARES QUE VOCE ESCREVEU FOI:%i\n",epar);
    printf("A QUANTIDADE DE NUMEROS IMPARES QUE VOCE ESCREVEU FOI:%i\n",eimpar);
}