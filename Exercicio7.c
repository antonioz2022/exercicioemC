#include <stdio.h>
#include <stdlib.h>

/*
7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos 
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a 
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para 
a nota da primeira prova.
*/
int main()
{
    float notas[2][2];
    float media;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("Digite a primeira nota do aluno %i: ", i+1);
            }
            else if(j == 1)
            {
                printf("Digite a segunda nota do aluno %i: ", i+1);
            }
            scanf("%f", &notas[i][j]);
            if(notas[i][j] == 50){
                printf("Notas devem estar no intervalo de 0 a 10.");
                exit(0);
            }
            else if(notas[i][j] > 10 || notas[i][j] < 0){
                printf("Notas devem estar no intervalo de 0 a 10.\n");
                j--;
            }
        }
    }
    for(int i = 0; i < 2; i++){
            media = (notas[i][0] + notas[i][1]) / 2;
            printf("Media do alundo %i: %.1f\n", i + 1, media);
    }

    return 0;
}