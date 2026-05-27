#include <stdio.h>

int main()
{
    int temp[6];
    int real[6];
    int j = 0;

    for(int i = 0;i < 6; i ++)
    {
        printf("Digite um valor:");
        scanf("%d",&temp[i]);

        if(temp[i] > 0)
        {
            real[j] = temp[i];
            j++;
        }
    }

    for(int i = 0;i < j; i ++)
    {
        printf("-%d\n",real[i]);
    }
}