#include <stdio.h>

/*
22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses 
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse 
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em 
seguida, o programa deverá apresentar na tela os resultados. 
*/
int main()
{
    int numeros[10];
    int par[10];
    int impar[10];
    int somatorio_par = 0;
    int subtração_impar = 0;
    int count_par = 0;
    int count_impar = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %i: ", i + 1);
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
    for (int i = 0; i < count_par; i++)
    {
        somatorio_par += par[i];
    }
    for (int i = 0; i < count_impar; i++)
    {
        subtração_impar -= impar[i];
    }
    printf("Soma dos pares: %d\n", somatorio_par);
    printf("Subtracao dos impares: %d", subtração_impar);
    return 0;
}