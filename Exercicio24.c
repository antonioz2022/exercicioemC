#include <stdio.h>

/*
24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma 
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.
*/
int main()
{
    int quantia;
    int ced_1 = 0;
    int ced_5 = 0;
    int ced_10 = 0;
    int ced_20 = 0;
    int ced_50 = 0;
    int ced_100 = 0;
    printf("Digite a quantia: ");
    scanf("%i", &quantia);
    while (quantia != 0)
    {
        if (quantia - 100 >= 0)
        {
            quantia -= 100;
            ced_100++;
        }
        else if (quantia - 50 >= 0)
        {
            quantia -= 50;
            ced_50++;
        }
        else if (quantia - 20 >= 0)
        {
            quantia -= 20;
            ced_20++;
        }
        else if (quantia - 10 >= 0)
        {
            quantia -= 10;
            ced_10++;
        }
        else if (quantia - 5 >= 0)
        {
            quantia -= 5;
            ced_5++;
        }
        else if (quantia - 1 >= 0)
        {
            quantia -= 1;
            ced_1++;
        }
    }
    int ced_total = ced_100 + ced_50 + ced_20 + ced_10 + ced_5 + ced_1;
    printf("Quantidade minima de cedulas = %i", ced_total);

    return 0;
}