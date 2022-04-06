#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int *p;
	int N, tamanhoN, i;
	int X;
	
	printf("Digite o valor a ser pesquisado no vetor:");
	scanf("%X", &X);
	
	//tamanho do vetor
	printf("Digite o tamanho do vetor:");
	scanf("%d", &tamanhoN);
	srand(time(NULL));
	p = (int *)malloc(sizeof(int) * tamanhoN);
	
	for(i=0; i<tamanhoN; i++){
		p[i] = rand() % tamanhoN;
	}
	
	for (i = 0; i < tamanhoN; i++){
		printf("P[%d] = %d\n", i, p[i]);
	}
	
	for (i = 0; i < tamanhoN; i++){
		if(p[i] == X){
			printf("%d esta presente na posicao: %d\n",X, i);
		}
	}
    free(p);
	return 0;
}

