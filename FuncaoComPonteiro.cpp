#include <stdio.h>
#include <stdlib.h>
void soma10(int *x){
	//somando o valor do endereco de numero com 10
	*x = *x + 10;
	printf("Soma de x = %d\n", *x);
	return; 
}

int main(void) {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("O numero digitado foi: %d \n", numero);
	//passando o endereco de numero como parametro
	soma10(&numero);
	
	printf("Agora o numero vale: %d\n",numero);
    return 0;
}
