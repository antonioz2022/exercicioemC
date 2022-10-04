#include <stdio.h>
#include <stdlib.h>

/*
8) Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número 
máximo (no exemplo, 9). Este número deve ser sempre ímpar.

1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/
int main()
{
    int numero;
    printf("Digite o numero maximo (impar): ");
    scanf("%i", &numero);
    if(numero % 2 == 0){
        printf("Erro: o numero deve ser impar.");
        exit(0);
    }
    for (int i = 0; i < numero; i++)
    {
        int j = 1;
        j += i;
        for (; j <= numero; j++)
        {
            printf("%i", j);
        }
        printf("\n");
          for (int k = 0; k <= i; k++)
        {
            printf(" ");
        }
        numero -= 1;
    }

    return 0;
}