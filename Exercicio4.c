#include <stdio.h>

/*
4) Faça um programa que lê dois valores e imprime:

a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro 
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".
*/
int main()
{
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    if (a > b)
    {
        for (int i = 0; i <= a - b; i++)
        {
            printf("%d", a - i);
            if (i < a - b)
            {
                printf(" - ");
            }
        }
    }
    else if (a < b)
    {
        for (int i = 0; i <= b - a; i++)
        {
            printf("%d", b - i);
            if (i < b - a)
            {
                printf(" - ");
            }
        }
    }
    else
    {
        printf("Valores iguais");
    }
    return 0;
}