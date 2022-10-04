#include <stdio.h>

/*
19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo 
inteiro.
*/

int main()
{
    int numeros[5];
    int maior_numero;
    for (int i = 0; i < 5; i++)
    {
         printf("Digite o numero %i: ", i+1);
         scanf("%i", &numeros[i]);
        if (i == 0)
        {
            maior_numero = numeros[0];
        }
        else if (numeros[i] > maior_numero)
        {
            maior_numero = numeros[i];
        }
    }
    printf("Maior numero: %i", maior_numero);
    return 0;
}