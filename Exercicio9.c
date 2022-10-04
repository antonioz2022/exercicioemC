#include <stdio.h>

/*
9) Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos 
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = 
(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:

maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E

*/

int main(){
    float nota1, nota2, nota3, ME;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);
    printf("Digite a media das notas dos exercicios: ");
    scanf("%f", &ME);
    float media_aproveitamento = (nota1 + (nota2*2) + (nota3*3) + ME) / 7;
    if (media_aproveitamento >= 9)
    {
        printf("O aluno ficou com um A.");
    }
    else if(media_aproveitamento >= 7.5 && media_aproveitamento < 9){
        printf("O aluno ficou com um B.");
    }
    else if(media_aproveitamento >= 6 && media_aproveitamento < 7.5){
        printf("O aluno ficou com um C.");
    }
    else if(media_aproveitamento >= 4 && media_aproveitamento < 6){
        printf("O aluno ficou com um D.");
    }
    else {
        printf("O aluno ficou com um E.");
    }
    
    return 0;
}