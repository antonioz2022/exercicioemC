#include <stdio.h>

/*
21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses 
números em pares e ímpares e os armazenem em dois outros vetores separando pares e 
ímpares, exibindo os resultados na tela. 
*/
int main()
{
    int numeros[12];
    int impar[12];
    int par[12];
    int count_par = 0;
    int count_impar = 0;
    for (int i = 0; i < 12; i++)
    {
        printf("Digite o numero %d:", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0)
        {
            par[count_par] = numeros[i];
            count_par++;
        }
        else
        {
            impar[count_impar] = numeros[i];
            count_impar++;
        }
    }
    printf("Numeros par: ");
    for (int i = 0; i < count_par; i++)
    {
        printf("%d", par[i]);
        if (i < count_par - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
    printf("Numeros impar: ");
    for (int i = 0; i < count_impar; i++)
    {
        printf("%d", impar[i]);
        if (i < count_impar - 1)
        {
            printf(", ");
        }
    }
    return 0;
}