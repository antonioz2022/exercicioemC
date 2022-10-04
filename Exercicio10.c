#include <stdio.h>

/*
10) Faça um programa que receba um número inteiro e que verifique se esse número é par 
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se 
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor 
que 50.
*/ 
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("O numero e par.\n");
        if (numero > 15)
        {
            printf("O numero e maior que 15.");
        }
    }
    else
    {
        printf("O numero e impar.\n");
        if (numero > 50)
        {
            printf("O numero e maior que 50.");
        }
    }
    return 0;
}