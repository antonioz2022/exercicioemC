#include <stdio.h>
/*
13) Dado um número positivo, crie um programa que escreva todos os números ímpares 
menores e/ou iguais a esse número e maiores ou igual a um.
*/

int main()
{
    int numero;
    printf("Digite um numero positivo: ");
    scanf("%i", &numero);
    for (int i = 0; i < numero; i++)
    {
        if(i % 2 != 0 && i > 0){
            printf("%i", i);
        }
    }
    return 0;
}