#include <stdio.h>
#include <stdlib.h>

typedef int elemento;

#include "tad_pilha2.h"

void binario() {
   tipo_pilha p;
   int x,n,d;
   printf("Digite um inteiro decimal positivo: ");
   scanf("%d", &n);
   criarPilha(&p);
   do {
   	x = n % 2;
      empilharElemento(&p,x);
      n = n / 2;
   } while (n!=0);
   printf("\nO correspondente binario é: ");
	while (!pilhaVazia(p)) {
		desempilharElemento(&p,&d);
		printf("%d",d);
   }
   fflush(stdin);
   getchar();
}

void main() {
	char op;
	do {
		binario();
      printf("\nDeseja mais um numero(s/n)? ");
      op = getchar();
   } while ((op == 'S') || (op=='s'));
}