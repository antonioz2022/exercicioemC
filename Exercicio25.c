#include <stdio.h>

/*
25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos 
valores é igual a média dos mesmos. 
*/
int main()
{
    int numeros[10];
    float soma = 0;
    int num_media = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %i: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        soma += numeros[i];
    }
    float media = soma / 10;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == media)
        {
            printf("O numero %i (%d) e igual a media.\n", i + 1, numeros[i]);
            num_media++;
        }
    }
    if (num_media == 0)
    {
        printf("Nenhum numero e igual a media.");
    }
    return 0;
}