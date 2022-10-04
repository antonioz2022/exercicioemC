#include <stdio.h>

/*
12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.
*/

int main()
{
    int idade_pedro, idade_joana, idade_ismael;
    printf("Digite a idade de pedro: ");
    scanf("%i", &idade_pedro);
    printf("Digite a idade de joana: ");
    scanf("%i", &idade_joana);
    printf("Digite a idade de ismael: ");
    scanf("%i", &idade_ismael);
    if (idade_joana > idade_pedro && idade_joana > idade_ismael)
    {
        printf("Joana e a mais velha.");
    }
    else if (idade_pedro > idade_ismael && idade_pedro > idade_ismael)
    {
        printf("Pedro e o mais velho.");
    }
    else if (idade_ismael > idade_joana && idade_ismael > idade_pedro){
        printf("Ismael e o mais velho.");
    }
    else{
        printf("Todos tem a mesma idade.");
    }
    
    return 0;
}