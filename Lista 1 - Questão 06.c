#include <stdio.h>
#include <stdlib.h>

/*
Exercício 06. Crie um programa que leia dois números inteiros e depois os imprima na
ordem inversa em que eles foram lidos.
*/

int main(){
	int n1, n2;
	
	  printf("digite dois numeros inteiros:\n\n");
	  
	  scanf("%i %i", &n1,&n2);
	  
	  printf("ordem inversa: %i %i\n\n", n2,n1);
	  
	  system("pause");
   return (0);
}