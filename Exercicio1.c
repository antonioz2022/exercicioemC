#include <stdio.h>
#include <math.h>

/*
1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do 
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada 
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo 
do primeiro número.
*/

int main(){
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    float soma = a + b;
    float primeiro_quadrado_segundo = a * (b*b);
    float quadrado_primeiro = a*a;
    float raiz_soma_quadrados = sqrt((a*a)+(b*b));
    float seno_diferença = sin(a-b);
    float modulo_primeiro = a > 0 ? a : a * -1;
    printf("Soma dos numeros: %.2f\n", soma);
    printf("Produto do primeiro numero pelo quadrado do segundo: %.2f\n", primeiro_quadrado_segundo);
    printf("Quadrado do primeiro numero: %.2f\n", quadrado_primeiro);
    printf("Raiz quadrada da soma dos quadrados: %.2f\n", raiz_soma_quadrados);
    printf("Seno da diferenca do primeiro numero pelo segundo: %.2f\n", seno_diferença);
    printf("Modulo do primeiro numero: %.2f", modulo_primeiro);

    return 0;
}