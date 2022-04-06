#include <stdio.h>
#include <stdlib.h>
int main() {
	int x, *ptrx, **pptrx, ***ppptrx;
	
	x = 0;
	printf("\nValor de x = %d\n", x);
	printf("Endereco de x: %x\n\n", &x);
	
	ptrx = &x;
	pptrx = &ptrx;
	ppptrx = &pptrx;
	
 	printf("\nvalor de x = %d", x);
	printf("\nEndereco apontado por ptrx: %x\n", ptrx);
	printf("Valor da variavel X que esta sendo apontada por ptrx: %d\n", *ptrx);
	printf("\nEndereco de memoria da variavel ptrx %x\n", &ptrx);
	
	**pptrx = **pptrx + 10;
	printf("\nPPTR acessando o valor de ptrx %d", **pptrx);
	printf("\n\nPPPTRX acessando o valor de pptrx %d", ***ppptrx);
    return 0;
}
