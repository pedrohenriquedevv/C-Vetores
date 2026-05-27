#include <stdio.h>
/*
Leia uma frase e conte:  
vogais;  
consoantes;  
números;  
caracteres especiais
*/
int main()
{
    char frase[50];
    printf("Digite sua frase:");
    fgets(frase,50,stdin);

    int tamanho = 0;
    while(frase[tamanho] != '\n')
    {
        tamanho ++;
    }

    //Contadores
    int numeros = 0;
    int vogais = 0;
    int consoantes = 0;
    int espc = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if(frase[i] == ' ')
        {

        }
        else if(frase[i] >= '0' && frase[i] <= '9')
        {
            numeros ++;
        }
        else if((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
        {
            if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
            {
                vogais++;
            }else
            {
                consoantes ++;
            }
        }else
        {
            espc ++;
        }
    }

    printf("Vogais: %d\n",vogais);
    printf("Numeros: %d\n",numeros);
    printf("Consoantes: %d\n",consoantes);
    printf("Caracteres especiais: %d\n",espc);
}