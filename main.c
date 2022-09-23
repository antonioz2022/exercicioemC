#include <stdio.h>

void exer_1();

int main(int argc, char** argv) {
    exer_1();
	return 0;
}

void exer_1(){
	int soma;
	int matriz[6][6];
	for (int l = 0; l < 6; l++){
		for (int c = 0; c < 6; c++){
			printf("Digite o numero %i da linha %i: ", c + 1, l + 1);
			scanf("%i", &matriz[l][c]);
		}
	}
    soma = matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3] + matriz[4][4] + matriz[5][5];
    
    for(int l = 0; l < 6; l++){
    	for (int c =0; c <6; c++){
    		printf("%i", matriz[l][c]);
    		if( c < 5){
    			printf(" - ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("Soma: %i", soma);
}