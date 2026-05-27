#include<stdio.h>

int  main()
{
    int numero[5];
    int verso[5];
    int i,j = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Digite:");
        scanf("%d",&numero[i]);
    }

    for(i = 4; i >= 0; i--)
    {
        verso[j] = numero[i];
        printf("-%d\n",verso[j]);
        j++;
    }
}