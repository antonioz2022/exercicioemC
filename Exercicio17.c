#include <stdio.h>

/*
17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
2=1+3+5+7, etc. Dado um número n,
calcule seu quadrado usando a soma de ímpares ao invés de produto.
*/

int quadrado();

int main()
{
    int numero;
    printf("Digite um numero natural: ");
    scanf("%i", &numero);
    printf("Numero ao quadrado: %i", quadrado(numero));
    return 0;
}

int quadrado(int n)
{
    int count = 1;
    int num = 1;
    for (int i = 1; i < n; i++)
    {
        count += 2;
        num += count;
    }
    return num;
}