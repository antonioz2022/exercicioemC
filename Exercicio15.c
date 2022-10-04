#include <stdio.h>

/*
15) Faça um programa que mostre todos os números pares existentes entre 1 e 50.
*/

int main()
{
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%i", i);
            if (i < 50)
            {
                printf(" - ");
            }
        }
    }
    return 0;
}