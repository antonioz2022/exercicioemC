#include <stdio.h>

/*
6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele 
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if" 
ou o operador de condição "?".
*/
int main()
{
    float preço;
    printf("Digite o preco do item: ");
    scanf("%f", &preço);
    int desconto = 20;
    while (preço < 100 && desconto != 10)
    {
            desconto = 10;
    }
    
    float preço_final = preço + (preço * desconto / 100);
    printf("Preco inflacionado final: %.2f R$", preço_final);
    return 0;
}