#include <stdio.h>

/*
11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse 
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma 
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas.
*/
int main(){
    int quantidade_alunos;
    int quantidade_alunas;
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &quantidade_alunos);
    printf("Digite a quantidade de alunas: ");
    scanf("%i", &quantidade_alunas);
    if(quantidade_alunas > quantidade_alunos){
        printf("A turma tem mais alunas. \n");
        printf("Quantidade de alunos: %i", quantidade_alunos);
    }
    else if(quantidade_alunos > quantidade_alunas){
        printf("A turma tem mais alunos. \n");
    }
    else{
        printf("A turma tem quantidades iguais de alunos e alunas");
    }
    return 0;
}