#include <stdio.h>
/*
 Leia um nome completo e mostre apenas o primeiro nome. 
*/
int main()
{
    char nome[50];
    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("\n Nome:%s",nome);
}