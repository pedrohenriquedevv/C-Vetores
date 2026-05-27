#include <stdio.h>
/*
 Faça um programa que leia 6 números e divida os elementos em dois 
vetores:  
11. um contendo números pares;  
12. outro contendo números ímpares
*/
int main()
{
    int num[6];
    int par[6];
    int impar[6];

    for(int i = 0; i < 6; i ++)
    {
        printf("Digite:");
        scanf("%d",&num[i]);
    }
    int j = 0;
    int k = 0;
    for(int i = 0; i < 6; i ++)
    {
        
        if(num[i] % 2 == 0)
        {
            par[j] = num[i];
            printf("Par-    %d\n",par[j]);
            j++;
            
        }else
        {
            impar[k] = num[i];
            printf("Impar-   %d\n",impar[k]);
            k++;
        }
    }
}