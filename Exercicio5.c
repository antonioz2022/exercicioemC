#include <stdio.h>

/*
5) Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere) 
para os códigos de 0 a 127.
*/
int main()
{
    printf("Tabela ASCII \n\n");
    for (int i = 0; i <= 127; i++)
    {
        if (i == 9 || i == 10 || i == 11 || i == 12 || i == 27)
        {
            printf("\t- %x\t-  %d\n", i, i);
        }
        else
        {
            printf("%c \t- %x\t-  %d\n", i, i, i);
        }
    }
}