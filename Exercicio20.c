#include <stdio.h>
/*
20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.

*/
int main()
{
    char nome1[20], nome2[20];
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", &nome2);
    if (nome2[0] < nome1[0])
    {
        printf("%s, %s", nome2, nome1);
    }
    else
    {
        printf("%s, %s", nome1, nome2);
    }
    return 0;
}
b