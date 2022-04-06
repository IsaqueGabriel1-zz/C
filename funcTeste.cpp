#include<stdio.h>
#include<stdlib.h>

int soma(int *x1, int *x2){
	int soma;
	soma=0;
	soma = *x1 + *x2;
	
	return soma;
}


int main(){
	int n1, n2;
	int res;
	n1=2;
	n2=4;
	
	res = soma(&n1, &n2);
	printf("SOma: %d\n", res);
	printf("Endereco de n1 %x\n", &n1);
	printf("Endereco de n2 %x\n", &n2);
	return 0;
}

