#include<stdio.h>
#include<stdlib.h>

int media(int n, int *vnotas){
	int soma, media;
	int i;
	soma=0;
	media=0;
	
	for(i=0; i<n; i++){
		soma = soma + vnotas[i];
	}
	
	media = soma / n;
	return media;
}


int main(){
	int vet[5], retorno;
	int i, num;
	
	for(i=0; i<5; i++){
		scanf("%d", &vet[i]);
		
	}
	
	retorno = media(5,vet);
	
	
	printf("A media dos numeros digitados foi: %d", retorno);
	return 0;
}

