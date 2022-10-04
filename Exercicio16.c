#include <stdio.h>

/*
16) Dados um número natural n, exiba seu fatorial n!.
*/

int fact();

int main()
{
    int numero;
    printf("Digite um numero natural: ");
    scanf("%i", &numero);
    printf("Fatorial do numero: %i", fact(numero));
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}