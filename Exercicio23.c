#include <stdio.h>

/*
23) Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene 
em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do 
qual foram digitados. 
*/
int main()
{
    int numeros[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o numero %i: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Numeros na ordem inversa de que foram digitados: ");
    for (int i = 5; i != -1; i--)
    {
        printf("%d", numeros[i]);
        if (i != 0)
        {
            printf(", ");
        }
    }
    return 0;
}