#include<stdio.h>
#include<stdlib.h>




int main(){
	int *p;
	int N, tamanhoN, i;
	
	//tamanho do vetor
	scanf("%d", &tamanhoN);
	p = (int *)malloc(sizeof(int) * tamanhoN);
	
	for(i=0; i<tamanhoN; i++){
		p[i] = rand() % 100;
	}
	
	for (i = 0; i < tamanhoN; i++){
		printf("P[%d] = %d\n", i, p[i]);
	}
    
	return 0;
}

