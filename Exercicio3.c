#include <stdio.h>

/*
3) Escreva um programa que leia um número na base decimal e em seguida imprima esse 
mesmo número nas bases octal e hexadecimal.
*/
int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Numero na forma Hexadecimal: %X \n", numero);
    printf("Numero na forma octal: %o", numero);
    return 0;
}