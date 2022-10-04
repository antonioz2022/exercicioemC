#include <stdio.h>

/*
18) Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10.

*/

int main()
{
    float notas[10];
    float soma = 0;
    float maior = 0;
    float menor = 0;
    for (int i = 0; i < 10; i++)
    {

        printf("Digite a nota %i: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] > 10 || notas[i] < 0)
        {
            printf("Numero digitado deve ser entre 1 e 10.\n");
            i--;

        }
        if (i == 0)
        {
            menor = notas[i];
        }
        else
        {
            if (notas[i] < menor)
            {
                menor = notas[i];
            }
        }
        if (notas[i] > maior)
        {
            maior = notas[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        soma += notas[i];
    }
    float media = soma / 10;
    printf("Soma das notas: %.1f\n", soma);
    printf("Media das notas: %.1f\n", media);
    printf("Maior valor das notas: %.1f\n", maior);
    printf("Menor valor das notas: %.1f", menor);

    return 0;
}