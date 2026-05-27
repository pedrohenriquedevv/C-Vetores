#include <stdio.h>
/*
Faça um programa que leia dois vetores A e B de 3 posições e gere um
terceiro vetor C contendo a soma dos elementos correspondentes. 
*/
int main()
{
    int a[3];
    int b[3];
    int c[3];

    for(int i = 0; i < 3; i ++)
    {
        printf("Digite1:");
        scanf("%d",&a[i]);
        printf("Digite2:");
        scanf("%d",&b[i]);

        c[i] = a[i] + b[i];
    }

    printf("A soma de seu 1 vetor:%d\n",c[0]);
    printf("A soma de seu 2 vetor:%d\n",c[1]);
    printf("A soma de seu 3 vetor:%d\n",c[2]);

}