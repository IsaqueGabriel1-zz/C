#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int x, *p, **pp;
	
	//inicializando o a variavel com zero
	
	x=0;
	printf("\nValor de x = %d\n", x);
	printf("Endereco de x: %x\n\n", &x);
	//atribuindo os enderecos para os ponteiros
	p = &x;
	pp = &p;
	
	printf("\n valor de x = %d\n", x);
	//valor do endereco apontado por P, no caso X
	printf("Endereco apontado por p: %x\n", p);
	//mostrara o valor que esta no endereco que P esta apontando.
	printf("Valor da variavel x que esta sendo apontada por p: %d\n", *p);
	//endereco de P
	printf("Endereco de memoria da variavel p: %x\n\n", &p);
	
	system("pause");
	getch();
	return(0);
}
